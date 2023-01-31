#include <iostream>
using namespace std;
class IntegerArray{
public:
    int *data;
    int size;
    IntegerArray(int size){
        data=new int[size];
        this->size=size;
    }
};

int main(){
    IntegerArray arr(2);
    arr.data[0]=4;arr.data[1]=5;
    delete[] arr.data;
    return 0;
}