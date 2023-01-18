#include <iostream>

using namespace std;
/*  Triplete
        Caso impar: x, (x*x/2)-0.5, (x*x/2)+0.5
        Caso par: x, (x/2)*(x/2)-1, (x/2)*(x/2)+1
        Formulas: https://byjus.com/maths/pythagorean-triples/


    NO FUNCIONA
*/

int main(){
    int total;
    long long producto=0;
    for(int a=3; total==1000; a++){
        total==0;
        if(a%2==0){
            total= a + (a/2)*(a/2) + (a/2)*(a/2);
            if(total==1000){
                cout<<"A = "<<a<<"\t"<<"B = "<<(a/2)*(a/2)-1<<"\t"<<"C = "<<(a/2)*(a/2)+1<<endl;
                producto=a * ((a/2)*(a/2)-1) * ((a/2)*(a/2)+1);
            }
        }
        else{
            total= a + (a*a/2) + (a*a/2);
            if(total==1000){
                cout<<"A = "<<a<<"\t"<<"B = "<<(a*a/2)-0.5<<"\t"<<"C = "<<(a*a/2)+0.5<<endl;
                producto=a * ((a*a/2)-0.5) * ((a*a/2)+0.5);
            }
        }
        
    }
    cout<<"Producto ABC = "<<producto<<endl;

    return 0;
}