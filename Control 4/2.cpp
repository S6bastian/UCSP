//2. (4 points) De acuerdo con el siguiente c´odigo, expliquelo e indique que imprime.
#include <iostream>
using namespace std;


template <class T, int N> //Crea una plantilla con el identificador T y declara un entero N
class mysequence { //Declaración de la clase
    T memblock [N-1]; //Declaracion del array memblock[] de tamaño N-1
public:
    void setmember (int x, T value){ //Función sin retorno setmember, recibe un entero "x" (indice) y "value" del tipo genérico  
        memblock[x]=value; //se le asigna a la posición "x" el valor de "value"
    }
    T getmember (int x){ //Función con retorno genérica, que recibe "x" entero
        return memblock[x-1]; //Retorna el valor asignado a membloc[x-1]
    }
};
int main () { //Función principal
    mysequence <int,5> myints; //Objeto "myints", identificador entero y N=5
    mysequence <double,5> myfloats; //Objeto "myfloats", identificador double y N=5
    myints.setmember (0,100); //Método que asigna valor entero memblock[0]=100
    myfloats.setmember (3,3.1416); //Método que asigna valor double memblock[3]=3.1416
    cout << myints.getmember(1) << "\n"; //Método que retorna la posición 0 de memblock del objeto myints, retorna 100
    cout << myfloats.getmember(4) << "\n"; //Método que retorna la posición 3 de memblock del objeto myfloat, retorna 3.1416
    return 0; //Fin de main
}

/*Output
    100
    3.1416
*/