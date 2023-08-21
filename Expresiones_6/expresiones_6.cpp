#include <iostream>

using namespace std;

int main(){
    /*
    Escriba un programa  que lea la nota final de cuatro alumnos y calcule el promedio de las cuatro
    calificaciones finales.
    */
    float cali_1,cali_2,cali_3,cali_4, prom = 0;
    cout<<"Calificación de alumno 1: "; cin>>cali_1;
    cout<<"Calificación de alumno 2: "; cin>>cali_2;
    cout<<"Calificación de alumno 3: "; cin>>cali_3;
    cout<<"Calificación de alumno 4: "; cin>>cali_4;

    prom = (cali_1+cali_2+cali_3+cali_4)/4;
    cout<<"El promedio final de los cuatro alumnos es de: "<<prom;

    return 0;
}