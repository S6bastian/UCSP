#include "PointArray.h"

PointArray::PointArray(int size){
    this->size=size;
    data=new Point[size]; 
}
PointArray::~PointArray(){
    delete[] data;
}
void PointArray::setData(int index, int x, int y){
    data[index]=Point(x,y);
}
Point PointArray::getData(int index) const{
    return data[index];
}
int PointArray::getSize() const{
    return size;
}
void PointArray::print() const{
    std::cout<<"[";
    for(int i=0; i<size; i++){
        data[i].print();
    }
}