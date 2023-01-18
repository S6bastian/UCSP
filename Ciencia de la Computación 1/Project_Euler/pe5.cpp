#include <iostream>

using namespace std;

int main(){
    int p=1,i=20;
    
    while(p){
        i++;
        for(int j=1;j<=20;j++){
            if(i%j!=0)
                break;
            if(j==20)
                p=0;
        }
    }

    cout<<"El menor numero divisible por el 1 al 20 es: "<<i<<endl;
        
    return 0;
}