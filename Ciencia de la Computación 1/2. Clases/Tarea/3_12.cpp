#include <iostream>
#include "Date.h"

using namespace std;

int main(){
    Date date1{5,6,2016};

    cout<<"-------------------------------------------"<<endl;
    cout<<"Month: "<<date1.getmonth()<<endl;
    cout<<"Day: "<<date1.getday()<<endl;
    cout<<"Year: "<<date1.getyear()<<endl;

    date1.setmonth(10);
    date1.setday(10);
    date1.setyear(2010);

    cout<<"-------------------------------------------"<<endl;
    date1.displayDate();

    return 0;
}