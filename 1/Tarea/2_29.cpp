#include <iostream>

using namespace std;

int main(){
    int n;

    n = 0;
    
    cout<<"Face length\tSurface area\tVolume"<<endl;
    cout<<"of cube (cm)\tof cube (cm^2)\tof cube (cm^3)\n"<<endl;

    cout<<n<<"\t\t"<<n*n<<"\t\t"<<n*n*n<<endl;
    n += 1;
    cout<<n<<"\t\t"<<n*n<<"\t\t"<<n*n*n<<endl;
    n += 1;
    cout<<n<<"\t\t"<<n*n<<"\t\t"<<n*n*n<<endl;
    n += 1;
    cout<<n<<"\t\t"<<n*n<<"\t\t"<<n*n*n<<endl;
    n += 1;
    cout<<n<<"\t\t"<<n*n<<"\t\t"<<n*n*n<<endl;
    
    return 0;
}