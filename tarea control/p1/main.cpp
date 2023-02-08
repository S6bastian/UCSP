#include <iostream>
#include "ArrayPoligons.h"

int main(){
    Polygon p0(0,0);
    Polygon p1(1,1);
    Polygon p2(2,2);
    Polygon p3(3,3);
    Polygon p4(4,4);
    Polygon p5(5,5);
    Polygon arr[]={p0,p1,p2,p3,p4,p5};
    int tam=sizeof(arr)/sizeof(arr[0]);
    ArrayPolygons a(arr,tam);
    
    a.print();
    a.insert(2,Polygon (9,9));
    a.print();
    a.remove(3);
    a.print();

}