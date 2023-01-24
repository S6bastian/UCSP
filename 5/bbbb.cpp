#include <iostream>
using namespace std;

bool primo(int n){
    int i=2, cont=0;
    while(i<=n){
        if(n%i==0){
            n=n/i;
            cont++;
        }
        else
            i++;
    }
    if(cont==1)
        return 1;
    return 0;
}

int main(){
    cout<<primo(7)<<endl;
    return 0;
}