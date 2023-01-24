#include <iostream>

using namespace std;

bool newIsAlpha(char character){
    int a=static_cast<int>(character);
    if((a>=65 && a<=90) || (a>=97 && a<=122)){
        return 1;
    }
    return 0;
}
int main(){
    char cadenaDesordenada[]="e6s0T9e6.eS.99u9n5a.CADENA";
    char actual=cadenaDesordenada[0];
    for(int i=0;actual!='\0';actual=cadenaDesordenada[++i]){
        if(isalpha(actual))
            cout<<(char)(isupper(actual) ? tolower(actual):actual);
        else if(ispunct(actual))
            cout<<' ';
    }
    cout<<endl;
    return 0;
}

//inplemente una funcion que reciba una cadena de solo letras y las convierta en minuscula