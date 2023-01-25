#include <iostream>
using namespace std;
/*
    Regiones de memoria: stack(region que guarda variables locales) y heap(region que guarda variables reservadas manualmente).
    ptr x se guarda en stack y se elimina al terminar la funcion.
    new crea variable en heap, la cual se crea(new) y elimina(delete) manualmente.
    p recibe la direccion de memoria de heap al ser un puntero y el valor indirecto de 5.
    se elimina p, es importante eliminar para no desperdiciar espacio y causar un memory leak.
*/

int *getPtrToFive(){
    int *x=new int;
    *x=5;
    return x;
}

int main(){
    int *p=getPtrToFive();
    cout<<*p<<endl; //5
    delete p;
    return 0;
}