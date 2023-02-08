#include <vector>
#include "Rectangle.cpp"
#include "Triangle.cpp"
#include "Polygon.cpp"
void print_areas(vector<Polygon*> polys){
    for (Polygon* poly : polys) {
        cout << "Area: " << poly->area() << endl;
        }
    }
int main() {
    vector<Polygon*> p;
    Rectangle pr(5,7);
    Triangle tr(6,7);
    p.push_back(new Triangle(6,12));
    p.push_back(new Triangle (4,1));
    p.push_back(new Triangle (8,34));
    p.push_back(new Rectangle (8,7));
    p.push_back(new Rectangle (6,70));
    p.push_back(new Rectangle (1,7));
    print_areas(p);
    pr.printwh();
    tr.printwh();
}