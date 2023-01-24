#include <iostream>

using namespace std;


int main(){
    int a,c;

    cout<<"--------------------------------------"<<endl;
    cout<<"Caso 1 despues de la variable"<<endl;
    c = 10;

    a=c++;

    cout<<"1.Valor de a = "<<a<<endl;
    cout<<"2.Valor de a = "<<a++<<endl;

    cout<<"Caso 2 antes de la variable"<<endl;
    c = 10;

    a=++c;

    cout<<"1.Valor de a = "<<a<<endl;
    cout<<"2.Valor de a = "<<++a<<endl;

    return 0;

}