#include <iostream>

using namespace std;

void intercambio(int &a, int&b){
    int temp=a;
    a=b;
    b=temp;
    return;
}
void printArrayIt(const int array[],const int size){
    cout<<"Elementos del array:";
    for(int i=0; i<size; i++)
        cout<<" "<<array[i];
    return;
}
void bubbleSort(int array[],const int size){ 
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1;j++){
            if(array[j]>array[j+1])
                intercambio(array[j],array[j+1]);
        }
    }
    return;
}
int main(){
    int array[]={1,9,17,6,3,2,15,11,4,14};
    int size=sizeof(array)/sizeof(int);
    bubbleSort(array,size);
    cout<<"Arreglo ordenado: ";
    printArrayIt(array,size);
    cout<<endl;
    return 0;
}