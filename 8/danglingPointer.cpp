#include <iostream>
using namespace std;
//dangling pointer: puntero que apunta a memoria con contenidop indefinido.
int* getPtrToFive(){
    int x=5;
    return &x;
}

int main(){
    int* p=getPtrToFive();
    cout<<*p<<endl; //???   ERROR
    //Imprime basura, la direccion de memoria es recibida exitosamente, pero el valor de 5 se pierde al salir de la funcion.
}