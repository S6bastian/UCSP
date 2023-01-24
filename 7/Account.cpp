#include <iostream>
#include "Account.h"

using namespace std;

int main(){
    Account a{"Alvaro",50};
    
    Account* ptr=&a;

    cout<<a.getBalance()<<endl;
    cout<<ptr->getBalance()<<endl;
    cout<<(*ptr).getBalance()<<endl;
}