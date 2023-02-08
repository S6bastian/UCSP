
#ifndef ARRAYPOLIGONS
#define ARRAYPOLIGONS
#include <iostream>
#include "Polygon.cpp"
class ArrayPolygons{
        Polygon *data;
        int size;
        public:
        ArrayPolygons();
        ArrayPolygons(const Polygon arr[],const int tam);
        ArrayPolygons(const ArrayPolygons &o);
        ~ArrayPolygons();
        void pushback(Polygon val);
        void insert(int index, Polygon val);
        void remove(int index);
        void print() const;
};
#endif