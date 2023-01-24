#include <string>

class Account {
    public:
        Account(std::string accountName,int initialBalance)
        : name{accountName,} {
            if (initialBalance>0){
                balance = initialBalance;
            }
        }        
        
        void setName(std::string accountName) {
            name = accountName;
        }
        std::string getName() const {
            return name;
        }
        void deposit(int n){
            if(n>0){
                balance=balance+n;
            }
        }
        int getBalance() const {
            return balance;
        }
    private:
        std::string name;
        int balance{0};
};
