#include <iostream>
using namespace std;
class IntegerArray{
public:
    IntegerArray(int size){
        data=new int[size];
        this->size=size;
    }
    ~IntegerArray(){
        delete[] data;
    }
    void setdata(int index, int val){
        data[index]=val;
    }
    int getData(int index){

        return data[index];
    }
private:
    int *data;
    int size;
};

int main(){
    IntegerArray arr(2);
    arr.setdata(0,4);arr.setdata(1,5);
    cout<<arr.getData(0)<<"\t"<<arr.getData(1)<<endl;
    return 0;
}