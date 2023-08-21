#include <iostream>
using namespace std;

int main(){
    float a, b, result =0;
    cout<<"Ingresa el valor de a: "; cin>>a;
    cout<< "Ingresa el valor de b: "; cin>>b;
    //Expresión completa
    result= (a/b)+1;
    cout.precision(2);
    cout<<"\nEl resultado de la expresion es: "<<result<<endl;
    

    return 0;
} 


