#include <iostream>

using namespace std;

int sum_of_sqr(int n){
    int sum=0;
    for(int i=1; i<=n; i++){
        sum=(i*i)+sum;
    }
    
    return sum;
}

int sqr_of_sum(int n){
    int sum=0;
    for(int i=1; i<=n; i++){
        sum=i+sum;
    }
    return sum*sum;
}

int main(){
    cout<<"Diferencia: "<<sqr_of_sum(100)-sum_of_sqr(100)<<endl;
    //cout<<sum_of_sqr(10)<<endl;
    //cout<<sqr_of_sum(10)<<endl;

    return 0;
}