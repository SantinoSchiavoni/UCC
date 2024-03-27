/*
Obtener un programa que lea un archivo “entrada.txt” 
y escriba en otro archivo “salida.txt” 
el contenido del fichero de entrada con todas las letras en mayúsculas
*/

#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main(){

    char linea[250];
    int l;

    ifstream file1;
    ofstream file2;

    file1.open("C:/archivos/entrada.txt");
    file2.open("C:/archivos/salida.txt");

    if(file1.fail()){
        cout<<"No se pudo abrir el archivo"<<endl;
    }
    else{
        do{
            file1.getline(linea,250);
            l=strlen(linea);
            for(int i=0;i<=l;i++){
                linea[i]=toupper(linea[i]);
            }
            file2<<linea<<endl;

        }while(!file1.eof());
    }
    file1.close();
    file2.close();

}