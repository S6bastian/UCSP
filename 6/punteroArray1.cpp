#include <iostream>
using namespace std;

void cuboPorReferencia(int*);

int main(){
    int array[]={1,2,3,4,5,6};
    int* prt=array; //Lo mismo que int* prt=&array[0];
    
    //valores
    cout<<*prt<<endl;

    return 0;
}
