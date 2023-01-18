#include <iostream>

using namespace std;

int main(){
    int x = 3;
    switch (x){
    case 1:
        cout << "x is 1\n";
        break;
    case 2:
    case 3:
        cout<<"x is 2 or 3\n";
    default:
        cout<<"x";
        break;
    }
}