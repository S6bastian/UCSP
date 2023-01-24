#include <iostream>

using namespace std;

bool potenciade2(int n) {
    int res = 1;
    while(res < n)
        res *= 2;
    return (res == n);
}

bool potencia_de_2_rec(int n){
    if(n==1)
        return 1;

    else if(n%2==0)
        return potencia_de_2_rec(n/2);
    
    else
        return 0;
}

int main(){
    int n;
    cout<<"Ingrese numero: ";
    cin>>n;
    cout<<n<<" es potencia de 2: "<<potenciade2(n)<<endl;
    cout<<n<<" es potencia de 2: "<<potencia_de_2_rec(n)<<endl;

    return 0;
}