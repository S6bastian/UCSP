#include <iostream>

using namespace std;
/*
int fib(int n){
    int f0 = 1, f1 = 1, fn;

    for(int i; i<n; i++)
        f0
        
    }

    

}
*/
int fib_it(int n){
    int fib_n, fib_n1 = 1, fib_n2 = 1;
    while(--n){
        fib_n = fib_n1 + fib_n2;
        fib_n2 = fib_n1;
        fib_n1 = fib_n;
    }

    return 0;        
}

int main(){
    cout<<fib_it(5)<<endl;
    return 0;
}




