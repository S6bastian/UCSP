#include <iostream>
#include <typeinfo>

class Base {
public:
    virtual void print() = 0;
};

class Derived1 : public Base {
public:
    void print() override {
        std::cout << "I am a Derived1 object" << std::endl;
    }
};

class Derived2 : public Base {
public:
    void print() override {
        std::cout << "I am a Derived2 object" << std::endl;
    }
};

int main() {
    Base* b = new Derived1();//
    Derived1* d1 = dynamic_cast<Derived1*>(b);

    if (d1) {
        std::cout << "Downcast from Base to Derived1 succeeded!" << std::endl;
    } else {
        std::cout << "Downcast from Base to Derived1 failed" << std::endl;
    }

    Base* b2 = new Derived2();
    Derived2* d2 = dynamic_cast<Derived2*>(b2);
    if (d2) {
        std::cout << "Downcast from Base to Derived2 succeeded!" << std::endl;
    } else {
        std::cout << "Downcast from Base to Derived2 failed" << std::endl;
    }

    Base* b4 = new Derived1();
    if (typeid(*b4) == typeid(Derived1)) {
        std::cout << "b4 is a Derived1 object" << std::endl;
    } else {
        std::cout << "b4 is not a Derived1 object" << std::endl;
    }

    return 0;
}