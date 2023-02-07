//3. (10 points) Basado en el siguiente código.
#include <iostream>
#include <ostream>

template <typename T>
class Fraction
{
    T gcd(T a, T b) { return b == 0 ? a : gcd(b, a % b); }
    T n, d;
public:
    Fraction(T n, T d=1) : n(n/gcd(n, d)), d(d/gcd(n, d)) { }
    T num() const { return n; }
    T den() const { return d; }
    Fraction& operator*=(const Fraction& rhs)
    {
        T new_n = n * rhs.n/gcd(n * rhs.n, d * rhs.d);
        d = d * rhs.d/gcd(n * rhs.n, d * rhs.d);
        n = new_n;
        return *this;
    }
    
    friend std::ostream& operator<<(std::ostream& output,const Fraction<T>& x);
    friend bool operator==(const Fraction<T>& x, const Fraction<T>& y);
    friend bool operator!=(const Fraction<T>& x, const Fraction<T>& y);
    friend Fraction<T> operator*(const Fraction<T>& x, const Fraction<T>& y);
    
};



//(b) (2 points) Reimplemente la clase Fraction para que sea genérica, implemente la
//función principal main y el uso de dicha clase.
template <typename T>
std::ostream& operator<<(std::ostream& output,const Fraction<T>& x){
    output<<x.num()<<"/"<<x.den();
    return output;
}

template <typename T>
bool operator==(const Fraction<T>& x, const Fraction<T>& y){
    return (x.n==y.n && x.d==y.d);
}

template <typename T>
bool operator!=(const Fraction<T>& x, const Fraction<T>& y){
    return (x.n!=y.n && x.d!=y.d);
}
template <typename T>
Fraction<T> operator*(const Fraction<T>& x, const Fraction<T>& y){
    return Fraction<T>(x.n*y.n, x.d*y.d);
}

int main()
{   
    Fraction<int> f1(3, 8), f2(1, 2), f3(10, 2);
    std::cout << (f1 == f2) << "\n";
    std::cout << (f1 != f2) << "\n";
    std::cout << f1 << " * " << f2 << " = " << f1 * f2 << "\n"
        << f2 << " * " << f3 << " = " << f2 * f3 << "\n"
        << 2 << " * " << f1 << " = " << 2 * f1 << "\n";
   
    /*
    Fraction<double> f1(3, 8), f2(1, 2), f3(10, 2);
    std::cout << (f1 == f2) << "\n";
    std::cout << (f1 != f2) << "\n";
    std::cout << f1 << " * " << f2 << " = " << f1 * f2 << "\n"
        << f2 << " * " << f3 << " = " << f2 * f3 << "\n"
        << 2 << " * " << f1 << " = " << 2 * f1 << "\n";

    */

}


