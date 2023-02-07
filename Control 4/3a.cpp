//3. (10 points) Basado en el siguiente código.
#include <iostream>
#include <ostream>

class Fraction
{
    int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
    int n, d;
public:
    Fraction(int n, int d = 1) : n(n/gcd(n, d)), d(d/gcd(n, d)) { }
    int num() const { return n; }
    int den() const { return d; }
    Fraction& operator*=(const Fraction& rhs)
    {
        int new_n = n * rhs.n/gcd(n * rhs.n, d * rhs.d);
        d = d * rhs.d/gcd(n * rhs.n, d * rhs.d);
        n = new_n;
        return *this;
    }
    
    friend std::ostream& operator<<(std::ostream& output,const Fraction& x);
    friend bool operator==(const Fraction& x, const Fraction& y);
    friend bool operator!=(const Fraction& x, const Fraction& y);
    friend Fraction operator*(const Fraction& x, const Fraction& y);
    
};



//Implemente:
//(a) (6 points) Sobrecargue los operadores: <<, ==, ! = y ∗; para la clase Fraction, tal que para el siguiente código:
std::ostream& operator<<(std::ostream& output,const Fraction& x){
    output<<x.num()<<"/"<<x.den();
    return output;
}
bool operator==(const Fraction& x, const Fraction& y){
    return (x.n==y.n && x.d==y.d);
}
bool operator!=(const Fraction& x, const Fraction& y){
    return (x.n!=y.n && x.d!=y.d);
}
Fraction operator*(const Fraction& x, const Fraction& y){
    return Fraction(x.n*y.n, x.d*y.d);
}

int main()
{
    Fraction f1(3, 8), f2(1, 2), f3(10, 2);
    std::cout << (f1 == f2) << "\n";
    std::cout << (f1 != f2) << "\n";
    std::cout << f1 << " * " << f2 << " = " << f1 * f2 << "\n"
        << f2 << " * " << f3 << " = " << f2 * f3 << "\n"
        << 2 << " * " << f1 << " = " << 2 * f1 << "\n";
}

/*debería dar la siguiente salida:
    0
    1
    3/8 * 1/2 = 3/16
    1/2 * 5/1 = 5/2
    2 * 3/8 = 3/4
*/
