/*Desarrolle un programa que reciba un parámetro de tipo entero y retorne la suma de
sus cifras*/

#include<iostream>
using namespace std;

int sumacifra(int num_generico){
    int resto, numero;
    numero = num_generico%10;
    while(num_generico>10){
        num_generico = num_generico/10;
        resto = num_generico%10;
        numero = numero + resto;
    }
    return numero;
}

int main(){
    int num_ingresado;
   cout<<"Ingrese un numero a sumar sus cifras"<<endl;
   cin>> num_ingresado;

   cout<<"La suma de sus cifras es igual a: "<<sumacifra(num_ingresado)<<endl;
   return 0;
}