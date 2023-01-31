#include <iostream>
using namespace std;
class IntegerArray{
public:
    int *data;
    int size;
};

int main(){
    IntegerArray arr;
    arr.size=2;
    arr.data=new int[arr.size];
    arr.data[0]=4;arr.data[1]=5;
    delete[] arr.data;
    return 0;
}