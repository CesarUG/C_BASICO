#include <iostream>

using namespace std;

int main(){
    int a, b, c, d, result=0;
    cout<< "Ingresa los valores de cada varible"<<endl;
    cout<< "\ningresa el valor de a: "; cin>>a;
    cout<<"\n Ingresa el valor de b: "; cin>>b;
    cout<< "\ningresa el valor de c: "; cin>>c;
    cout<<"\n Ingresa el valor de d: "; cin>>d;
    
    result= a+(b/(c-d));
    cout<<"El resultado de la expresión es: "<<result<<endl;
    return 0;    
}