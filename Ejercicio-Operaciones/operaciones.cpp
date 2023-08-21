/*Escribe un programa que lea la entrada estandar de dos números y muestre
en la salida estándar su suma, resta, multiplicación y división
*/

#include <iostream>

using namespace std;

int main(){
    int num1, num2, sum=0,rest=0, multi = 0, div=0;
    cout<<"Ingresa el primer numero: ";
    cin>>num1;
    cout<<"\nIngresa el segundo numero: ";
    cin>>num2;
    //OPERACIONES
    sum= num1+num2;//suma
    rest= num1-num2;//resta
    multi= num1*num2;//multipliación    
    div= num1/num2;//división

    //Imprimir suma, multiplicación, resta y división
    cout<<"suma: "<<sum<<"\nresta: "<<rest<<"\nmultiplicacion: "<<multi<<"\ndivision: "<<div;
  return 0;
}