#include <iostream>
using namespace std;

class Integer{
public:
    int val;
    Integer(){
        val=0; cout<<"default constructor"<<endl;
    }
};

int main (){
    Integer arr[3];
    /*for(int i=0; i<3; i++){   // No funciona al usar un objeto array
        arr[i]=0;
        cout<<arr[i]<<endl;
    }*/
    for(const Integer a:arr){
        cout<<a.val<<endl;
    }
    for(int i=0;i<3;i++){
        cout<<arr[i].val<<endl;
    }
    /*for(Integer* ptr=arr;*ptr<3;ptr++){ //Error propio no se hacerlos con punteros
        cout<<ptr->val<<endl;
    }*/
    return 0;
}