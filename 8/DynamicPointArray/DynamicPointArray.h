#ifndef __DYNAMICPOINTARRAY_H__
#define __DYNAMICPOINTARRAY_H__

#include "Point.h"

class DynamicPointArray {
    private:
        Point *data;
        int size;

    public:
        DynamicPointArray(int size);
        DynamicPointArray(const DynamicPointArray &o);
        ~DynamicPointArray();
        void setData(int index, Point value);
        Point getData(int index) const;
        int getSize() const;
        void print() const;

        void insert(int position, Point value);
        void remove(int position);
        void clear();
};

#endif