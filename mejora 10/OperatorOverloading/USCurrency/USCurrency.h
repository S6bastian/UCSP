#ifndef __USCURRENCY_H__
#define __USCURRENCY_H__
#include <iostream>

class USCurrency{
private:
    int dollars;
    int cents;
public:
    friend USCurrency operator+(const USCurrency &o , const USCurrency &i);
    friend std::ostream& operator<<(std::ostream& output, USCurrency &o);
    USCurrency(int dollars, int cents){
        this->dollars=dollars;
        this->cents=cents;
    }

};

USCurrency operator+(const USCurrency &o , const USCurrency &i){//UwU
    USCurrency tmp={0,0};
    tmp.cents = i.cents + o.cents;
    tmp.dollars = i.dollars + o.dollars;
    if (tmp.cents>=100){
        tmp.dollars+=1;
        tmp.cents-=100;
    }
    return tmp;
}

std::ostream& operator<<(std::ostream& output, USCurrency &o){
    output<<"$"<<o.dollars<<"."<<o.cents;
    return output;
}

#endif