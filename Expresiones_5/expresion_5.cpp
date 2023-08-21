#include <iostream>

using namespace std;

int  main(){
    int x,y, aux;
    cout<<"Ingresa el valor de x: "; cin>>x;
    cout<<"Ingresa el valor de y: "; cin>>y;
    /*
    Ejemplo:

    x= 10
    y= 5

       */
   aux = x;
   // aux = 10
   x=y;
   //x=5
   y= aux;
   //y= 10
   cout<<"valor de x: "<<x<<endl;
   cout<<"valor de y: "<<y<<endl;
    return 0;
}