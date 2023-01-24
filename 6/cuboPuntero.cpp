#include <iostream>
using namespace std;

void cuboPorReferencia(int*);

int main(){
    int num=5;

    cout<<"Valor de num: "<<num<<endl;
    cuboPorReferencia(&num);
    cout<<"Cubo de num: "<<num<<endl;

    return 0;
}
void cuboPorReferencia(int* nPtr){
    *nPtr=*nPtr**nPtr**nPtr;
}