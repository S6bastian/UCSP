#include <iostream>
#include <stdexcept>
#include "DynamicPointArray.h"

DynamicPointArray::DynamicPointArray(int size) {
    data = new Point[size];
    this->size = size;
}

DynamicPointArray::DynamicPointArray(const DynamicPointArray &o) {
    data = new Point[o.size];
    this->size = o.size;
    for(int i = 0; i < size; ++i)
        data[i] = o.data[i];
}

DynamicPointArray::~DynamicPointArray() {
    delete[] data;
}

void DynamicPointArray::setData(int index, Point value) {
    if (index >= size){
        throw std::out_of_range ("el indice se pasa del limite");
    }
    data[index] = value;
}

Point DynamicPointArray::getData(int index) const {
    if (index<0 || index>=size)
        throw  std::out_of_range ( "El indice no es el correcto" );
    return data[index];
}

int DynamicPointArray::getSize() const {
    return size;
}

void DynamicPointArray::print() const {
    std::cout << "[ ";
    for(int i = 0; i < size; i++)
        data[i].print();
    std::cout << " ]" << std::endl;
}

void DynamicPointArray::insert(int position, Point value){
    if(position>0 && position<size){
        Point *tmp = new Point[size+1];
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

void DynamicPointArray::remove(int position){
    if(position>=0 && position<size){
        Point *tmp= new Point[size-1];
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

void DynamicPointArray::clear(){
    Point *tmp= new Point[0];
    size=0;
    delete[] data;
    data=tmp;
}
