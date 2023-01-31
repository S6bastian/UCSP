#ifndef __POINT_H__
#define __POINT_H__

#include <iostream> 

class Point{
    private:
        int x,y;
    public:
        Point();
        Point(int,int);
        void setX(int);
        void setY(int);
        int getX() const;
        int getY() const;
        void print() const;
};

#endif