#include <iostream>

using namespace std;

int main(){
    int age;

    cout<<"Enter your age: ";
    cin>>age;

    cout<<"Suggested MHR---------------------------------------------"<<endl;
    cout<<"Your MHR is: "<<208-0.7*age<<" by Tanaka 2001"<<endl;
    cout<<"Your MHR is: "<<207-0.7*age<<" by Gellish 2007"<<endl;
    cout<<"Your MHR is: "<<211-0.64*age<<" by Nes 2012"<<endl;

    cout<<"\nSuggested MHR ranked from smallest to largest---------------------------------------------"<<endl;
    cout<<"Your MHR is: "<<207-0.7*age<<" by Gellish 2007"<<endl;
    cout<<"Your MHR is: "<<208-0.7*age<<" by Tanaka 2001"<<endl;
    cout<<"Your MHR is: "<<211-0.64*age<<" by Nes 2012"<<endl;



    return 0;
}