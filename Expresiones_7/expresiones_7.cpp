#include <iostream>

using namespace std;

int main(){
    float practica, teorica, participacion, cali_Final=0;
    
    cout<< "Ingresa la calificación de practica: ";cin>>practica;
    cout<<"Ingresa la calificación de teoría: "; cin>>teorica;
    cout<< "Ingresa la calificación de participación: "; cin>>participacion;
    practica *=0.30;//practica = practica *0.30
    teorica *= 0.60;
    participacion *=.10;
    cali_Final=practica+teorica+participacion;
    cout<<"La calificación final del alumno es: "<<cali_Final;


    return 0;
}