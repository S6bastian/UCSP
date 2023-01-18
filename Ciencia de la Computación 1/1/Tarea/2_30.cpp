#include <iostream>

using namespace std;

int main(){
    int peso;
    float bmi,altura;

    cout<<"Ingrese su peso en kg: ";
    cin>>peso;
    cout<<"Ingrese su altura en m: ";
    cin>>altura;

    bmi = peso/(altura*altura);

    if (bmi < 18.5){
        cout<<"Su BMI es de "<<bmi<<" por lo tanto tiene: bajo peso";
    }
    else if (bmi >= 18.5 && bmi <= 24.9){
        cout<<"Su BMI es de "<<bmi<<" por lo tanto tiene: peso normal";
    }
    else if (bmi >= 25 && bmi <= 29.9){
        cout<<"Su BMI es de "<<bmi<<" por lo tanto tiene: sobrepeso";
    }
    else if (bmi >= 30){
        cout<<"Su BMI es de "<<bmi<<" por lo tanto tiene: obesidad";
    }
    
    return 0;
}