#include <iostream>
using namespace std;

int main(){
    char holamundo[]={'H','o','l','a',',',' ','m','u','n','d','o','!','\0'};

    cout<<holamundo<<endl;

    int size=sizeof(holamundo)/sizeof(holamundo[0]);
    cout<<size;

    return 0;
}