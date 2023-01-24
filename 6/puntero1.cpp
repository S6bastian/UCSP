#include <iostream>
using namespace std;

int main(){
    int a=7;
    int* aPtr=&a;
    cout<<"La direccion de la variable a es: "<<&a
    <<"\nEl valor de aPtr es: "<<aPtr<<endl;
    cout<<"El valor de a es: "<<a
    <<"\nEl valor de indireccion de aPtr es: "<<*aPtr<<endl;
}