#include <iostream>
#include "IntegerArray.h"

using namespace std;

int main() {
    IntegerArray a(2);
    
    try {
        a.setData(10,3);
    } catch (out_of_range& ex) {
        cerr << "Hubo un error: " << ex.what() << endl;
    }

    return 0;
}