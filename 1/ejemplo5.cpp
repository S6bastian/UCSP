//Implemente un programa que evalue si un caracter representa una letra minuscula

#include <iostream>

using namespace std;

int main(){
    char val;
    cout<<"Ingrese el caracter: ";
    cin>>val;

    int valor = static_cast<int>(val);

    if (valor >= 97 && valor <= 122){
        cout<<val<<" es minuscula"<<endl;
    }
    else {
        cout<<val<<" no es minuscula"<<endl;
    }

    return 0;
}