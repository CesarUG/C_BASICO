#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a,b,c, x1=0, x2=0;
    cout<<"Ingresa el valor de a: "; cin>>a;
    cout<<"Ingresa el valor de b: "; cin>>b;
    cout<<"Ingresa el valor de c: "; cin>>c;

    x1 = ((-b)+(sqrt(pow(b,2))-4*a*c))/(2*a);
    x2 = ((-b)-(sqrt(pow(b,2))-4*a*c))/(2*a);
    cout<<"la primera solución de x: "<<x1<<endl;
    cout<<"la segunda solución de x: "<<x2<<endl;
    
    return 0;
} 