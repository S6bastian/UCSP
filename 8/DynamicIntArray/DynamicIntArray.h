#ifndef __INTEGERARRAY_H__
#define __INTEGERARRAY_H__

#include <iostream>

class DynamicIntArray {
    private:
        int *data;
        int size;

    public:
        DynamicIntArray();
        DynamicIntArray(const int arr[], const int size);
        DynamicIntArray(const DynamicIntArray &o);
        ~DynamicIntArray();

        void push_back(int value);
        void insert(int position, int value);
        void remove(int position);
        void clear();
        
        int getSize() const;
        void print() const;
};

#endif