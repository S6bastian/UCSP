#include <iostream>
using namespace std;

void print(const int* array, const int size){
    for(int i=0;i<size;i++,array++){
        cout<<*array<<" ";
    }
    cout<<endl;
}
void print1(const int* array, int size){
    while(size--){
        cout<<*array<<" ";
        array++;
    }
    cout<<endl;
}
void printRec(const int* array, int size){
    if(size>0){
        cout<<*array++<<" ";
        printRec(array,--size);
    }
    else{
        cout<<endl;
        return;
    }
}
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reverse(int* array, int size){
    for(int i=0;i<size/2;i++)
        swap(array+i,array+size-i-1);
}

void reverseRec(int* array, int size,int i=0){
    if(i<size-1){
        swap(array,array+size-i-1);
        reverseRec(++array,--size,++i);
    }
    else
        return;

    //swap(*array,*array+size-i);
}
void reverse2(int* start, int* end){
    while(start<end){
        swap(start,end);
        start++;
        end--;
    }
}
void reverse2Rec(int* start, int* end){
    if(start<end){
        swap(start,end);
        reverse2Rec(++start,--end);
    }
    else
        return;
}

int main(){
    int array[] = {1,2,3,4,5,6};
    int size = sizeof(array)/sizeof(array[0]);
    print(array,size);
    print1(array,size);
    printRec(array,size);
    //reverse(array,size);
    reverseRec(array,size);
    //reverse2(array,array+size-1);
    //reverse2Rec(array,array+size-1);
    printRec(array,size);
    return 0;
}
