#ifndef POINTARRAY_H
#define POINTARRAY_H
#include <iostream>
#include "Point.h"

class PointArray{
    private:
        Point *data;
        int size;
    public:
        PointArray(int size);
        ~PointArray();
        void setData(int index,int,int);
        Point getData(int index) const;
        int getSize() const;
        void print() const;
};
#endif