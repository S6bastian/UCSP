#include <iostream>

using namespace std;

int fibo_sum_par(){
    int f2=1,f1=1,fn=0,sum_par=0;

    while (fn<=4000000){
        fn=f2+f1;
        f2=f1;
        f1=fn;

        if(fn%2==0)
            sum_par += fn;
    }
    return sum_par;
}

int main(){
    cout<<"Suma de pares: "<<fibo_sum_par()<<endl;

    return 0;
}