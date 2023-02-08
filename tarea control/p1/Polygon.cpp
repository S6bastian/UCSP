#include <iostream>
using namespace std;
#ifndef POLYGON
#define POLYGON
class Polygon{
    protected:
        int width, height;
    public:
        Polygon (int a, int b) : width(a), height(b) {}
        Polygon(){
            width=0;
            height=0;
        }
        int area (void){return 0;}
        void printarea(){
        cout << this->area() << '\n';}

        void print()const{
        std::cout<<"["<<width<<" , "<<height<<"]"<<std::endl;
    
        }   
};
#endif