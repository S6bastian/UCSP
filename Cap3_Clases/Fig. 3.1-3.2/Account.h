//Fig. 3.2: Account.h
//Account class that contains a name data member
//and menberfunctions to set and get its value
#include <string> //enable program to use c++ string data type

class Account{
public:
    //member function that sets the account name in the object
    void setName(std::string accountName){
        name=accountName; //stor the account name
    }

    //member function that retrieves the account name from the object
    std::string getName() const{
        return name;
    }
private:
    std::string name; //data member containing account holder's name
}; //end class Account