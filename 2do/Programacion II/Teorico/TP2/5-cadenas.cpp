/*
Ingresar  una cadena  de caracteres de longitud máxima  10, enviarla como 
parámetro  a  una función que  maneje  punteros  de  modo  que  retorne  la  misma 
cadena de caracteres, pero en mayúsculas.
*/

#include <iostream>
#include <string.h>
using namespace std;

char* mayusculas(char* cadena){
    char *p;
    p = &cadena[0];
    for(int i = 0; i < strlen(p); i++){ //strlen devuelve la longitud de la cadena
        p[i] = toupper(p[i]); //toupper convierte a mayusculas
    }
    return p;
}

int main(){
    char cadena[10];
    char *p;
    p=&cadena[0];

    cout << "Ingrese una cadena de caracteres: ";
    cin.getline(p, 10);
    cout << "Cadena en mayusculas: " << mayusculas(p) << endl;
    return 0;
}