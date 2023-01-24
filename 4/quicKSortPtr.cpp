#include <iostream>

using namespace std;

void intercambio(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
    return;
}
void print(const int* array, const int size){
    for(int i=0;i<size;i++,array++){
        cout<<*array<<" ";
    }
    cout<<endl;
}
int partition(int* array,int low,int high){
    int pivot=*(array+high);
    int i=low-1;
    for(int j=low;j<=high-1;j++){
        if(*(array+j)<=pivot){
            i++;
            intercambio(array+i,array+j);
        }
    }
    intercambio(array+i+1,array+high);
    return i+1;
}
void quickSort(int* array,int low,int high){ 
    if(low<high){
        int pivot=partition(array,low,high);
        quickSort(array,low,pivot-1);
        quickSort(array,pivot+1,high);
    }
    return;
}
int main(){
    int array[]={1,9,17,6,3,2,15,11,4,14};
    int size=sizeof(array)/sizeof(int);
    quickSort(array,0,size-1);
    cout<<"Arreglo ordenado: ";
    print(array,size);
    cout<<endl;
    return 0;
}