#include <iostream>

using namespace std;
/*
    Realiza un programa que lea la etrada estandar de los siguientes
    datos de una persona.
    Edad: dato  de tipo entero
    Sexo: dato de tipo caracter.
    Altura en metros: dato de tipo real.

*/
int main(){
    int age=0;
    char gender[10];
    float height; 
    

    cout<< "Ingresa la edad: "; cin>>age;
    cout<< "Ingresa el sexo: "; cin>>gender;
    cout<< "Ingresa la altura: ";cin>>height;

    cout<<"\nEdad: "<<age<<endl;
    cout<<"Sexo: "<<gender<<endl;
    cout<< "Altura: "<<height<<endl;
    return 0;
}