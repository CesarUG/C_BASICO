#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float cA, cO, hip =0;

    cout<<"Ingresa el valor del primer cateto: "; cin>>cA;
    cout<<"Ingresa el valor del segundo cateto: "; cin>>cO;

    hip= sqrt(pow(cA,2)+pow(cO,2));
    cout<<"El valor de la hipotenusa es de: "<<hip<<endl;
    
    return 0;
}