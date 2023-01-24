#include <iostream>

using namespace std;

int sumar(const int array[], const int tam){ //array por defecto es paso por referencia
    long sum=0;
    for (int i=0; i<tam; sum+=array[i++]);
    return sum;
}

void printArrayIt(const int array[],const int tam){
    cout<<"Elementos del array_it:";
    for(int i=0; i<tam; i++)
        cout<<" "<<array[i];
}

void printArrayRec(const int array[],const int tam, int i=0){
    if(i==0)
        cout<<"Elementos del array_rec:";
    if(i==tam)
        return;
    else{
        cout<<" "<<array[i];
        printArrayRec(array,tam,++i);
    }

}
void intercambio(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    

}
void invertirArrayIt(int array[],const int tam){
    int temp=0;
    for(int i=0; i<tam/2; i++)
        intercambio(array[i],array[tam-1-i]);
    printArrayIt(array,tam);
}
/*
void invertirArrayIt(int array[],const int tam){
    cout<<"Elementos del array_inv_it:";
    int temp=0;
    for(int i=0; i<tam/2; i++){
        temp=array[i];
        array[i]=array[tam-i-1];
        array[tam-i-1]=temp;
    }
    printArrayIt(array,tam);
}
*/
void invertirArrayRec(int array[],const int tam,int i=0){
    if(i<tam/2)
        printArrayRec(array,tam);
        return;
    intercambio(array[i],array[tam-i-1]);
    invertirArrayRec(array,tam,++i);
}


int main(){
    int arr[]={1,2,3,4,5,6,7};
    cout<<"Suma de elementos: "<<sumar(arr,7)<<endl;
    printArrayIt(arr,7);
    cout<<"\n";
    printArrayRec(arr,7);
    cout<<"\n";
    invertirArrayIt(arr,7);
    cout<<"\n";
    invertirArrayRec(arr,7);
    return 0;
}