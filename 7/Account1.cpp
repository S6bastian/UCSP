#include <iostream>
#include "Account.h"

using namespace std;

void print(Account* array, int size){
    while(size--){
        cout<<array->getName()<<" "<<array->getBalance()<<endl;
        array++;
    }
    cout<<endl;
}
void swap(Account* a, Account* b){
    Account temp = {a->getName(), a->getBalance()};
    *a = *b;
    *b = temp;
}
void bubbleSort(Account* array, int size){
    for(int i=0; i<size; i++){  
        for(int j=0; j<size-1;j++){
            if((array+j)->getBalance()>(array+j+1)->getBalance()){
                swap(array+j,array+j+1);
            }
        }
    }
}

int main(){
    Account a1{"Alvaro", 50};
    Account a2{"Paul", 100};
    Account a3{"Gabriel", 75};
    Account a4{"Alejandra", 500};
    Account a5{"Sebastian", 25};
    Account array[] = {a1, a2, a3, a4, a5};
    //int size = sizeof(array)/sizeof(int);
    bubbleSort(array,5);
    print(array, 5);
    //cout<<size;
    return 0;
}