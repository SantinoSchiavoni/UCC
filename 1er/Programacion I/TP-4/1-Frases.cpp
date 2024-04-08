/*
1. Crear un programa que lea las frases introducidas por el usuario y 
las guarde en un archivo de texto llamado “registroDeUsuario.txt”. 
El ingreso Terminará cuando la frase introducida sea "fin"
(esa frase no deberá guardarse).

*/
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main(){
    ofstream file;

    char linea[250];
    file.open("C:\archivos\registroDeUsuario.txt");

    do{
        cout<<"Ingrese una frase"<<endl;
        cin.getline(linea,250,'\n');
        if(strcmp(linea,"fin")!=0){
            file<<linea<<endl;
        }
    }while(strcmp(linea,"fin")!=0);

    file.close();
}