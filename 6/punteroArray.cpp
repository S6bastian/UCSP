#include <iostream>
using namespace std;

void cuboPorReferencia(int*);

int main(){
    int array[]={1,2,3,4,5,6};
    int* prt=&array[0];
    //valores
    cout<<*prt<<endl;
    cout<<*(prt+1)<<endl;
    cout<<*(prt+2)<<endl;
    cout<<*(prt+3)<<endl;
    cout<<*(prt+4)<<endl;
    cout<<*(prt+5)<<endl;
    //valores
    cout<<*prt<<endl;
    cout<<*(++prt)<<endl;
    cout<<*(++prt)<<endl;
    cout<<*(++prt)<<endl;
    cout<<*(++prt)<<endl;
    cout<<*(++prt)<<endl;
    //direccion de memoria
    cout<<prt<<endl;
    cout<<(prt+1)<<endl;
    cout<<(prt+2)<<endl;
    cout<<(prt+3)<<endl;
    cout<<(prt+4)<<endl;
    cout<<(prt+5)<<endl;
    return 0;
}
