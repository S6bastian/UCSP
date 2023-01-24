#include <iostream>

using namespace std;

int main(){
    long long n=600851475143,i=1,a=0,b=1;
    int cont;

    while (i<n){
        if(n%i==0){
            cont=0;
            for(int j=1;j<=i;j++){
                if(i%j==0){
                    cont++;
                }
            }

            if(cont==2){
                cout<<i<<endl;;
            }
        }
        i++;
        /*
        if(a==b)
            break;

        a=b;
        b=i;
        */
    }
    return 0;
}