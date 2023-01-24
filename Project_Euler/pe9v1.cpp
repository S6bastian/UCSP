#include <iostream>
using namespace std;

int main(){
    int c,cont=0;
    for(int a=1;a<1000;a++){
        for (int b=a+1;b<1000;b++){
            c=1000-a-b;
            if (a*a+b*b==c*c) {
                cout<<"A = "<<a<<"\t"<<"B = "<<b<<"\t"<<"C = "<<c<<endl;
                cout<<a*b*c;
                cont=1;
                break;
            }
        }
        if (cont==1)
            break;
    }
    return 0;
}