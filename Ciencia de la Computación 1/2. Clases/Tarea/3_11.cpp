#include <iostream>
#include "MotorVehicle.h"

using namespace std;

int main(){
    MotorVehicle vehicle1{"Ford","Gasoline","Red",2000,25};

    cout<<"-------------------------------------------"<<endl;
    cout<<"Make: "<<vehicle1.getm()<<endl;
    cout<<"Fuel type: "<<vehicle1.getft()<<endl;
    cout<<"Color: "<<vehicle1.getc()<<endl;
    cout<<"Year of manufacture: "<<vehicle1.getyom()<<endl;
    cout<<"Engine capacity: "<<vehicle1.getec()<<endl;

    vehicle1.setm("Kia");
    vehicle1.setft("Gas");
    vehicle1.setc("Black");
    vehicle1.setyom(2020);
    vehicle1.setec(10);

    cout<<"-------------------------------------------"<<endl;
    vehicle1.displayCarDetails();

    return 0;
}