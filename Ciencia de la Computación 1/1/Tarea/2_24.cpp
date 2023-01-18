#include <iostream>

using namespace std;

int main(){
    int a,b,suma;

    cout<<"Ingrese dos numeros enteros: "<<endl;
    cin>>a>>b;

    suma = a+b;

    if (suma%2 == 1){
        cout<<suma<<" es impar"<<endl;
    }
    else{
        cout<<suma<<" no es impar"<<endl;
    }

    return 0;
}