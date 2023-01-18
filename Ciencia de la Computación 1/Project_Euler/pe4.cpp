#include <iostream>

using namespace std;

int main(){
    int a,b,x,max=0;
    for(int i=999;i>=100;i--){
        for (int j=999;j>=100;j--){
            a=i*j;
            x=a;
            b=0;
            
            while(x){
                b=x%10+b*10;
                x=x/10;
            }
            //cout<<a<<"       "<<b;
            if(a==b){
                //cout<<"Numero capicua: "<<a<<" -> "<<i<<" x "<<j<<endl;
                if(max<a){
                    max=a;
                }
                
            }
            //break;
        }
        //break;
    }
    cout<<"Maximo numero capicua: "<<max<<endl;
    return 0;
}