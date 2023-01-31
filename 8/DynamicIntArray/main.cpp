#include <iostream>
#include "DynamicIntArray.h"

using namespace std;

int main() {
    int arr[]={1,2,3};
    DynamicIntArray dyn1(arr,3);
    //cout << dyn1.getSize() << endl;
    dyn1.print();

    //dyn1.push_back(100);
    //dyn1.insert(3,20);
    //dyn1.remove(1);
    //dyn1.clear();

    dyn1.print();

    return 0;
}
