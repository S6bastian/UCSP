#include <iostream>
#include "USCurrency.h"
using namespace std;

int main(){
    USCurrency a={2,50};
    USCurrency b={1,75};
    USCurrency c=a+b;

    cout<<c<<endl;
    
    return 0;
}