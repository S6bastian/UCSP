#ifndef __INTEGERARRAY_H__
#define __INTEGERARRAY_H__

#include <iostream>

template<typename T>
class DynamicIntArray {
private:
    T *data;
    T size;

public:
    DynamicIntArray(){
        this->size = 0;
        data = new T[size];
    }
    DynamicIntArray(const T arr[], const T size){
        this->size = size;
        data = new T[size];
        for(T i = 0; i < size; i++)
            data[i] = arr[i];
    }
    DynamicIntArray(const DynamicIntArray &o){
        this->size = o.size;
        data = new T[o.size];
        for(T i = 0; i < size; i++)
            data[i] = o.data[i];
    }
    ~DynamicIntArray(){
        delete[] data;
    }

    void push_back(T value){
        T *tmp = new T[size+1];
        for(T i = 0; i < size; i++)
            tmp[i] = data[i];
        delete[] data;
        data = tmp;
        size++;
        data[size-1] = value;
    }
    void insert(T position, T value){
        if(position>0 && position<size){
            T *tmp = new T[size+1];
            for(T i=0; i<position; i++){
                tmp[i]=data[i];
            }
            tmp[position]=value;
            for(T i=position+1; i<size+1; i++){
                tmp[i]=data[i-1];
            }
            size++;
            delete[] data;
            data=tmp;
        }
        else{
            throw  std::out_of_range ( "El indice no es el correcto" );
        }
    }
    void remove(T position){
        if(position>=0 && position<size){
            T *tmp= new T[size-1];
            for(T i=0; i<position; i++){
                tmp[i]=data[i];
            }
            for(T i=position; i<size-1; i++){
                tmp[i]=data[i+1];
            }
            size--;
            delete[] data;
            data=tmp;
        }
        else{
            throw  std::out_of_range ( "El indice no es el correcto" );
        }
    }
    void clear(){
        T *tmp= new T[0];
        size=0;
        delete[] data;
        data=tmp;
    }
    
    T getSize() const{
        return size;
    }
    void print() const{
        std::cout << "[ ";
        for(T i = 0; i < size; i++)
        std::cout << data[i] << " ";
        std::cout << "]" << std::endl;
    }
};

#endif