#include <iostream>
using namespace std;
#ifndef POLYGON
#define POLYGON
class Polygon {
    protected:
        int width, height;
    public:
        Polygon (int a, int b) : width(a), height(b) {}
        virtual int area ()=0;
        void printarea(){
        cout << this->area() << '\n';
        }
        virtual void printwh(){
        cout << "Width: " <<width << " Height: " <<height << endl;}
    };
#endif