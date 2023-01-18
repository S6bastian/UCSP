#include <iostream>

using namespace std;

int main(){
    int num;

    cout<<"Ingrese un numero entero de 4 digitos: ";
    cin>>num;

    
    cout<<num%10<<"  ";
    num = num/10;
    cout<<num%10<<"  ";
    num = num/10;
    cout<<num%10<<"  ";
    num = num/10;
    cout<<num;

    return 0;
}