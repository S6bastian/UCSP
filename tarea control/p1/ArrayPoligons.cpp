
#include <iostream>
#include "ArrayPoligons.h"
ArrayPolygons::ArrayPolygons(){
    this ->size=0;
    data=new Polygon[size];
}
ArrayPolygons::ArrayPolygons(const Polygon arr[],const int size){
    this->size=size;
    data=new Polygon[size];
    for(int i = 0; i < size; i++)
        data[i] = arr[i];
}
ArrayPolygons::ArrayPolygons(const ArrayPolygons &o) {
    this->size = o.size;
    data = new Polygon[o.size];
    for(int i = 0; i < size; i++)
        data[i] = o.data[i];
}
ArrayPolygons::~ArrayPolygons() {
    delete[] data;
}

void ArrayPolygons::pushback(Polygon val) {
    Polygon *tmp= new Polygon [size+1];
    for (int i=0;i<size;i++){
        tmp[i]=data[i];
    }
    delete [] data;
    data=tmp;
    size++;
    data[size-1]=val; 
}


void ArrayPolygons::insert(int index, Polygon val){
    Polygon *tmp= new Polygon [size+1];
    for (int i=0;i<index;i++) 
        tmp[i]=data[i];
    tmp[index]=val;
    for (;index<size;index++)
        tmp[index+1]=data[index];
    delete [] data;
    data=tmp;
    size++;
    
}
void ArrayPolygons::remove(int index) {
    Polygon *tmp= new Polygon [size-1];
    for (int i=0;i<index;i++) 
        tmp[i]=data[i];

    for (;index+1<size;index++)
        tmp[index]=data[index+1];
    delete [] data;
    data=tmp;
    size--;
}

void ArrayPolygons::print() const {
    std::cout << "[ ";
    for(int i = 0; i < size; i++)
     data[i].print();
    std::cout << "]" << std::endl;
    }


