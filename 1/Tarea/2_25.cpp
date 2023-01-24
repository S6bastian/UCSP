#include <iostream>

using namespace std;

int main(){
    int a,b,c;

    cout<<"Ingrese tres numeros enteros: "<<endl;
    cin>>a>>b>>c;
    cout<<"----------------------------------------------------------------------"<<endl;
    if (c%a == 0 && c%b == 0){
        cout<<"Los 2 primeros numeros son factores del tercero"<<endl;
    }
    else{
        cout<<"Los 2 primeros numeros no son factores del tercero"<<endl;
    }

   
    
    return 0;
}