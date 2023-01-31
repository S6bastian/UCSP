#include <iostream>
#include "Point.h"

using namespace std;

int main(){
    Point a(7,2);
    a.print();
    a.setX(9);
    a.setY(11);
    a.print();
    
    return 0;
}