// Fig. 7.21: fig07_21.cpp
// Demonstrating C++ Standard Library class template vector.
#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>
using namespace std;

void outputVector(const vector<int>&); // display the vector
void inputVector(vector<int>&); // input values into the vector

int main(){
    vector<int>integers1(7); //7-element vector<int>
    vector<int>integers2(10); //10-element vector<int>

    //print integers1 size and contents
    cout<<"Size of integers1 is "<<integers1.size()<<"\nvector after initialization: ";
    outputVector(integers1);
    
    //print integers1 size and contents
    cout<<"Size of integers2 is "<<integers2.size()<<"\nvector after initialization: ";
    outputVector(integers2);

    //input and print integers1 and integers2
    cout<<"\nEnter 17 integers:"<<endl;
    inputVector(integers1);
    inputVector(integers2);

    cout<<"\nAfter input the vectors contain:"<<endl;
    cout<<"integers1:";
    outputVector(integers1);
    cout<<"integers2:";
    outputVector(integers2);

    //use inequality (!=) operator with vector objects
    cout<<"\nEvaluating: integers1 != integers2"<<endl;
    if(integers1!=integers2){
        cout<<"integers1 and integers2 are not equal"<<endl;
    }

    //create vector integers3 using integers1 as an initializer; print sizes and contents
    vector<int>integers3{integers1};//copy constructor

    cout<<"\nSize of vector integers3 is "<<integers3.size()<<"\nVector after initailization: ";
    outputVector(integers3);

    //use overloaded assignment (=) operator
    cout<<"\nAssigning integers2 to integers1:"<<endl;
    integers1=integers2;//assign integers2 to integers1

    cout<<"integers1: ";
    outputVector(integers1);
    cout<<"integers2: ";
    outputVector(integers2);

    //use equality (==) operator with vector objects
    cout<<"\nEvaluating: integers1 == integers2"<<endl;
    if(integers1==integers2){
        cout<<"integers1 and integers2 are equal"<<endl;
    }

    //use square brackets to use the value at location 5 as an value
    cout<<"\nintegers1[5] is "<<integers1[5];

    //use sqare breackets to assign a value to position 5
    cout<<"\n\nAssigning 1000 to integers1[5]"<<endl;
    integers1[5]=1000;
    cout<<"integers1: ";
    outputVector(integers1);

    //attempt to use out-of-range subscript
    try{
        cout<<"\nAttempt to display integers1.at(15)"<<endl;
        cout<<integers1.at(15)<<endl; //ERROR: out of range
    }
    catch(out_of_range& ex){
        cerr<<"An exception ocurred: "<<ex.what()<<endl;
    }

    //changing the size of a vector
    cout<<"\nCurrent integers3 size is: "<<integers3.size()<<endl;
    integers3.push_back(1000); //add1000 at the end of the vector
    cout<<"New integers3 size is: "<<integers3.size()<<endl;
    outputVector(integers3);
}

//output vector contents
void outputVector(const vector<int>& items){
    for(int item:items){
        cout<<item<<" ";
    }
    cout<<endl;
}

//input vector contents
void inputVector(vector<int>& items){
    for(int& item:items){
        cin>>item;
    }
}