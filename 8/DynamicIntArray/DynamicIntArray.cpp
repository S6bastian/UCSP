#include <iostream>
#include "DynamicIntArray.h"

DynamicIntArray::DynamicIntArray() {
    this->size = 0;
    data = new int[size];
}

DynamicIntArray::DynamicIntArray(const int arr[], const int size) {
    this->size = size;
    data = new int[size];
    for(int i = 0; i < size; i++)
        data[i] = arr[i];
}

DynamicIntArray::DynamicIntArray(const DynamicIntArray &o) {
    this->size = o.size;
    data = new int[o.size];
    for(int i = 0; i < size; i++)
        data[i] = o.data[i];
}

DynamicIntArray::~DynamicIntArray() {
    delete[] data;
}


int DynamicIntArray::getSize() const {
    return size;
}

void DynamicIntArray::print() const {
    std::cout << "[ ";
    for(int i = 0; i < size; i++)
        std::cout << data[i] << " ";
    std::cout << "]" << std::endl;
}

void DynamicIntArray::push_back(int value) {
    int *tmp = new int[size+1];
    for(int i = 0; i < size; i++)
        tmp[i] = data[i];
    delete[] data;
    data = tmp;
    size++;
    data[size-1] = value;
}

void DynamicIntArray::insert(int position, int value){
    if(position>0 && position<size){
        int *tmp = new int[size+1];
        for(int i=0; i<position; i++){
            tmp[i]=data[i];
        }
        tmp[position]=value;
        for(int i=position+1; i<size+1; i++){
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

void DynamicIntArray::remove(int position){
    if(position>=0 && position<size){
        int *tmp= new int[size-1];
        for(int i=0; i<position; i++){
            tmp[i]=data[i];
        }
        for(int i=position; i<size-1; i++){
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

void DynamicIntArray::clear(){
    int *tmp= new int[0];
    size=0;
    delete[] data;
    data=tmp;
}