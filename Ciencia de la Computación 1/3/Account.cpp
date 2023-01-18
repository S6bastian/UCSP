#include <iostream>
#include "Account.h"

using namespace std;

void printAccountDetails(const Account &account) {    
    cout << account.getName() << endl;
    cout << account.getBalance() << endl;
}

void modifyAccount(Account &account) {
    string name;
    int x;
    cout << "Ingrese nuevo nombre: ";
    getline(cin,name);
    account.setName(name);
    cout << "Ingrese monto a depositar:";
    cin >> x;
    account.deposit(x);
}

int main() {
    
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    Account &ref = account1;    

    printAccountDetails(ref);

    /*printAccountDetails(account1);
    modifyAccount(account2);
    printAccountDetails(account2);*/
    
    return 0;
}