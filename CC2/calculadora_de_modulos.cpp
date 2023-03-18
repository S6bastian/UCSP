#include <iostream>

using namespace std;

void suma(int n1,int n2,int mod){
    int result;
    result=n1+n2;
    if(result>=mod){
        result%=mod;
    }
    if(result<0){
        result=result+mod;
    }
    cout<<"Suma:"<<endl;
    cout<<n1<<" mod "<<mod<<" + "<<n2<<" mod "<<mod<<" = "<<result<<" mod "<<mod<<endl;
}
void resta(int n1,int n2,int mod){
    int result;
    result=n1-n2;
    if(result>=mod){
        result%=mod;
    }
    if(result<0){
        result=result+mod;
    }
    cout<<"Resta:"<<endl;
    cout<<n1<<" mod "<<mod<<" - "<<n2<<" mod "<<mod<<" = "<<result<<" mod "<<mod<<endl;
}
void multiplicacion(int n1,int n2,int mod){
    int result;
    result=n1*n2;
    if(result>=mod){
        result%=mod;
    }
    if(result<0){
        result=result+mod;
    }
    cout<<"Multiplicacion:"<<endl;
    cout<<n1<<" mod "<<mod<<" * "<<n2<<" mod "<<mod<<" = "<<result<<" mod "<<mod<<endl;
}

int main(){
    int n1,n2,mod;

    cout<<"Calculadora de modulos"<<endl;
    cout<<"Ingrese el primer numero, segundo numero y modulo: "<<endl;
    cin>>n1>>n2>>mod;
    cout<<"--------------------------------------------------------------------------"<<endl;
    suma(n1,n2,mod);
    cout<<"--------------------------------------------------------------------------"<<endl;
    resta(n1,n2,mod);
    cout<<"--------------------------------------------------------------------------"<<endl;
    multiplicacion(n1,n2,mod);
    cout<<"--------------------------------------------------------------------------"<<endl;
    

    return 0;
}