#include <iostream>

using namespace std;

void suma(int n1, int n2, int mod) {
    int result;
    result = n1 + n2;
    if (result >= mod) {
        result %= mod;
    }
    if (result < 0) {
        result = result + mod;
    }
    cout << "Suma:" << endl;
    cout << n1 << " mod " << mod << " + " << n2 << " mod " << mod << " = " << result << " mod " << mod << endl;
}
void resta(int n1, int n2, int mod) {
    int result;
    result = n1 - n2;
    if (result >= mod) {
        result %= mod;
    }
    if (result < 0) {
        result = result + mod;
    }
    cout << "Resta:" << endl;
    cout << n1 << " mod " << mod << " - " << n2 << " mod " << mod << " = " << result << " mod " << mod << endl;
}
void multiplicacion(int n1, int n2, int mod) {
    int result;
    result = n1 * n2;
    if (result >= mod) {
        result %= mod;
    }
    if (result < 0) {
        result = result + mod;
    }
    cout << "Multiplicacion:" << endl;
    cout << n1 << " mod " << mod << " * " << n2 << " mod " << mod << " = " << result << " mod " << mod << endl;
}
void inversa(int B, int A) { //B=n1 y A=mod
    int q,R=0,P0=0,P1=1,Px;
    while(R!=1){
        q = A / B;
        R = A % B;
        Px = P0 - (q * P1);

        A = B;
        B = R;
        P0 = P1;
        P1 = Px;

        cout << "Inverso: "<<Px<<endl;
    }
    
}

int main() {
    int n1, n2, mod;

    cout << "Calculadora de modulos" << endl;
    cout << "Ingrese el primer numero, segundo numero y modulo: " << endl;
    cin >> n1 >> n2 >> mod;
    cout << "--------------------------------------------------------------------------" << endl;
    suma(n1, n2, mod);
    cout << "--------------------------------------------------------------------------" << endl;
    resta(n1, n2, mod);
    cout << "--------------------------------------------------------------------------" << endl;
    multiplicacion(n1, n2, mod);
    cout << "--------------------------------------------------------------------------" << endl;
    inversa(n1, mod);

    return 0;
}