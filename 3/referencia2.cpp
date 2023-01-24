#include <iostream>

using namespace std;

int main() {
    int val = 100;

    int &ref1 = val;
    ref1 = 1000;

    int &ref2 = val;
    ref2 = 1;

    cout << val << endl;

    return 0;
}