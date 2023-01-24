#include <iostream>

using namespace std;

int main(){
    int radio;
    float pi;

    cout<<"Introduzca el radio (entero) del circulo: ";
    cin>>radio;

    pi = 3.14159;

    cout<<"El diametro es: "<<2*radio<<endl;
    cout<<"La circunferencia es: "<<2*pi*radio<<endl;
    cout<<"El area es: "<<pi*radio*radio<<endl;


    return 0;
}