/*
Obtener una función copia que utilice punteros para copiar una cadena en otra. 
*/

#include <iostream>
#include <string.h>
using namespace std;

char* copia(char* a){
    int l = strlen(a); //obtengo la longitud de la cadena
    char *p = new char[l]; //reservo memoria para la cadena copiada
    for(int i=0; i< l;i++){ //copio la cadena
        p[i] = a[i]; //copio el caracter
    }
    return p;
}

int main(){
    char cadena[10];
    char *p;
    p=&cadena[0];

    cout << "Ingrese una cadena de caracteres: ";
    cin.getline(p, 10);
    cout << "Cadena copiada: " << copia(p) << endl;
    return 0;
}