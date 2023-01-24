#include <iostream>

using namespace std;

int main(){
    /*
        short = 2 bytes
        int, long = 4 bytes
        long long = 8 bytes

        unsigned = sin simbolo
    */

    short a = 32767;
    int b = 10;
    long c = 10;
    long long d = 10;

    cout<<sizeof(a)<<endl;
    cout<<a<<endl;
    a += 1;
    cout<<a<<endl;
    cout<<sizeof(b)<<endl;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(d)<<endl;

    return 0;
}