#include <iostream>
//NO FUNCIONA INCONCLUSO
using namespace std;

int sum_prime(int n){
    int cont=0,sum=2,temp;
    for(int i=3; i<n; i+=2){
        temp=i;
        cout<<j<<endl;
        /*
        while(j<temp){
            //cout<<temp<<endl;
            
            if(temp%j==0){
                temp/=j;
                cont++;
                continue;
            }
            
            j++;
        }
        */
        for(int j=1; j<=i; j++){
            if(temp%j==0)

                cont++;
        }
        if(cont==2)
            cout<<sum<<endl;
            sum=i+sum;

        cont=0;
    }
    return sum;

}

int main(){
    cout<<sum_prime(10)<<endl;
    //cout<<"Suma de numeros primos por debajo de 2000000 es: "<<sum_prime(2000000)<<endl;
    

    return 0;
} 