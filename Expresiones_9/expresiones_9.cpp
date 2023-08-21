#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float x,y, result=0;

    cout<<"Ingresa el valor de x: "; cin>>x;
    cout<<"Ingresa el valor de y:", cin>>y;

    result= (sqrt(x))/(pow(y,2)-1);
    cout<<"El resultado de la función es: "<<result<<endl;

    return 0;
}