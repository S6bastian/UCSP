#include "Polygon.cpp"
class Triangle: public Polygon {
    public:
        Triangle(int a, int b): Polygon(a,b) {}
        int area () {return width * height / 2;}
        void printwh(){
        cout << "Width: " <<width << " Height: " <<height << endl;}
};