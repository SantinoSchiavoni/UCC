/*
Realizar  un  programa  que  ingrese  una  cadena  de  caracteres  de  máximo  50 
elementos  y  la  envíe  como  parámetro  a  una  función  que  maneje  punteros 
de modo que la  función invierta la cadena
*/

#include <iostream>
#include<string.h>
using namespace std;

char* invertir(char* cadena){
    int longitud = strlen(cadena);
    char *p = new char[longitud]; //reservo memoria para la cadena invertida
    for(int i = 0; i < longitud; i++){
        p[i] = cadena[longitud - i - 1]; //invierto la cadena
    }
    p[longitud] = '\0'; //agrego el caracter nulo al final de la cadena
    return p;
}

int main(){
    char cadena[50];
    char *puntero;

    puntero=&cadena[0];

    cout<<"Ingrese la cadena de caracteres "<<endl;
    cin.getline(puntero,50, '\n');

    cout<<"-------"<<endl;
    cout<<invertir(puntero)<<endl;
}