#include <iostream>

using namespace std;

int main(){
    int a,b,c,d,e,mayor,menor;

    cout<<"Ingrese el primer    numero: "<<endl;
    cin>>a;
    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>b;
    cout<<"Ingrese el tercer numero: "<<endl;
    cin>>c;
    cout<<"Ingrese el cuarto numero: "<<endl;
    cin>>d;
    cout<<"Ingrese el quinto numero: "<<endl;
    cin>>e;

    mayor = a;
    if (mayor < b){
        mayor = b;
    }
    if (mayor < c){
        mayor = c;
    }
    if (mayor < d){
        mayor = d;
    }
    if (mayor < e){
        mayor = e;
    }

    menor = a;
    if (menor > b){
        menor = b;
    }
    if (menor > c){
        menor = c;
    }
    if (menor > d){
        menor = d;
    }
    if (menor > e){
        menor = e;
    }

    cout<<"------------------------------------"<<endl;
    cout<<"El numero mayor es: "<<mayor<<endl;
    cout<<"El numero menor es: "<<menor<<endl;

    return 0;
}