/*
Realice la sumatoria de los números enteros comprendidos entre el 1 al 10.
*/
#include<iostream>
using namespace std;

int main(){
    
    //Declarar Variables
    int suma = 0;
    int i=0;
    //Logica
    do{
        suma = suma + i;
        i++;
    } while(i<=10);
    cout<<"La suma es: "<<suma<<endl;
    return 0;
}