/*Escribe los 100 primeros números pares.*/

#include<iostream>
using namespace std;

int main(void){
    //Declarar Variables
    int contador = 1;
    int i=0;
    do{
        if((i%2)==0){
            cout<<"El numero: "<<i<<" Es Par"<<endl;
            //cout<<" Es el numero: "<<contador<<endl;
        }
        i= i + 2;
        contador ++;
    } while(contador<=100);
    return 0;
}