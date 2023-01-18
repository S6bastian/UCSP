#include <iostream>

using namespace std;
bool n_prime(int n){
    int cont=0;
    for(int i=1;i<=n; i++){
        if(n%i==0)
            cont++;
    }
    if(cont==2)
        return 1;
    else
        return 0;
}

int main(){
    int i=2,cont=0,pos;
    cout<<"Ingrese posicion del numero primo: ";
    cin>>pos;
    while(1){
        if(n_prime(i)==1)
            cont++;
        if(cont==pos){
            cout<<"Posicion del numero primo "<<i<<" es: "<<cont<<endl;
            break;
        }
        i++;
    }

    return 0;
}