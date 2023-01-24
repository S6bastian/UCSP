#include <iostream>

using namespace std;

int main(){
    char var;

    cout<<"Escriba un caracter: ";
    cin>>var;

    cout<<"\n-------------------------------------------------------\n"<<endl;

    cout<<"Equivalente ASCII = "<<static_cast<int>(var)<<endl;
    
    return 0;
}