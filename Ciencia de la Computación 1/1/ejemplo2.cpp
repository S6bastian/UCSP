//Operadores aritmeticos
#include <iostream>

using namespace std;

int main(){

    int a;
    int b;

    a = 10;
    b = 15;

    int suma = a+b;
    int resta = a-b;
    int multi = a*b;
    float div = a/b;
    int mod = a%b;

    cout<<"La suma es: "<<suma<<endl;
    cout<<"La resta es: "<<resta<<endl;
    cout<<"La multiplicacion es: "<<multi<<endl;
    cout<<"La division es: "<<div<<endl;
    cout<<"El modulo es: "<<mod<<endl;

    return 0;
}