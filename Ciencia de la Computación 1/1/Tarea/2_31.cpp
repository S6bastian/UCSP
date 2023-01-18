#include <iostream>

using namespace std;

int main(){
    float miles,gallons,costxgal,milxgal,park,tolls,total;

    cout<<"a) Total miles driven per day: ";
    cin>>miles;
    cout<<"b) Cost per gallon of gasoline: ";
    cin>>costxgal;
    cout<<"c) Average miles per gallon: ";
    cin>>milxgal;
    cout<<"d) Parking fees per day: ";
    cin>>park;
    cout<<"e) Tolls per day: ";
    cin>>tolls;

    total = miles*milxgal*costxgal+park*4+tolls*5;   
    cout<<"\n-------------------------------------------------------"<<endl;
    cout<<"The cost of car-pool per day is: "<<total<<"$"<<endl;

    return 0;
}