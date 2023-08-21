#include <iostream>

using namespace std;

int main(){
    float a,b,c,d,e,f, result=0;
    cout<<"ingresa los valores de cada variable";
    cout<<"\ningresa a: "; cin>>a;
    cout<<"\ningresa b: "; cin>>b;
    cout<<"\ningresa c: "; cin>>c;
    cout<<"\ningresa d: "; cin>>d;
    cout<<"\ningresa e: "; cin>>e;
    cout<<"\ningresa f: "; cin>>f;

    result = (a+(b/c))/(d+(e/f));
    cout.precision(4);
    cout<<"El resultado de la expresión es: "<<result<<endl;

    return 0;
}