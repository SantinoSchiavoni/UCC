/*
Escribir un programa que complete un arreglo con los veinte primeros números
pares y calcule su suma.
*/

#include<iostream>
using namespace std;

int main(){
    int a[20],suma=0;
    int numero=1, contador_pares=0, i=0;
    while (contador_pares<20){
        if(numero%2==0){
            a[i]=numero;
            suma =suma + a[i];
            i++;
            contador_pares++;
        }
        numero++;
    }
    cout<<suma<<endl;
    return 0;
}