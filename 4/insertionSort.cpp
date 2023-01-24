#include <iostream>

using namespace std;

void printArrayIt(const int array[],const int size){
    cout<<"Elementos del array:";
    for(int i=0; i<size; i++)
        cout<<" "<<array[i];
    return;
}
void insertionSort(int array[], int size) {
  for (int i = 1; i < size; i++) {
    int key = array[i];
    int previous = i - 1;

    while (key < array[previous] && previous >= 0) {
      array[previous+1] = array[previous];
      --previous;
    }
    array[previous + 1] = key;
  }
}
int main(){
    int array[]={1,9,17,6,3,2,15,11,4,14};
    int size=sizeof(array)/sizeof(int);
    insertionSort(array,size);
    cout<<"Arreglo ordenado: ";
    printArrayIt(array,size);
    cout<<endl;
    return 0;
}