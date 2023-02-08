#include "Polygon.cpp"
class Rectangle: public Polygon {
    public:
        Rectangle(int a, int b): Polygon(a,b) {}
        int area () {return width * height;}
        void printwh(){
        cout << "Width: " <<width << " Height: " <<height << endl;}
};