/*
Determinar el mayor y el menor 
entre diez números enteros ingresados por teclado.
*/

#include<iostream>
using namespace std;

int main(void){
    //Declarar variables
    int num;
    int max;
    int min;
    //Logica
    cout<<"Ingrese un numero"<<endl;
    cin>>num;
    max = num;
    min = num; 
    for(int i=1; i<10; i++){
        cout<<"Ingrese otro numero"<<endl;
        cin>>num;
        if(num>max){
            max = num;
        }else if(num<min){
            min = num;
        }
    }
    cout<<"El numero mas grande es: "<<max<<endl;
    cout<<"El numero mas chico es: "<<min<<endl;
    return 0;
}