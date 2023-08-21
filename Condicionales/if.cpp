#include <iostream>

using namespace std;
 /*
    if(condición){
        intrucciones 1;
    }else{
        intrucciones 2;
    }
    */
int main(){
    int num, data =5;
    cout<<"Ingresa un numero: "; cin>>num;
    if(num<data){
        cout<<"El numero es menor a 5";
    }else{
        cout<<"El numero es mayor a 5";
    }

    return 0;
}