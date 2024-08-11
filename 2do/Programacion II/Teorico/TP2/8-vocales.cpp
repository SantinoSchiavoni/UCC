/*
Realice un programa que permita ingresar una cadena de caracteres de máximo 
50 elementos,  la  envíe como  parámetro a una función  que  utilizando punteros  y 
retorne el número de vocales minúsculas que contiene la cadena
*/

#include <iostream>
#include <string.h>
using namespace std;

int vocales(char* cadena){
    char *p;
    int contador = 0;
    int l = strlen(cadena);
    p = &cadena[0];
        for(int i = 0; i < l; i++){ //strlen devuelve la longitud de la cadena
        if(p[i] == 'a' || p[i] == 'e' || p[i] == 'i' || p[i] == 'o' || p[i] == 'u'){
            contador++;
        }
    }
    return contador;
}

int main(){
    char cadena[50];
    char *p;
    p=&cadena[0];

    cout << "Ingrese una cadena de caracteres: ";
    cin.getline(p, 50);
    cout << "Cantidad de vocales minusculas: " << vocales(p) << endl;
    return 0;
}