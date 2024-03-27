/*
Obtener un programa que solicite un archivo de texto y 
muestre en pantalla el contenido del mismo haciendo una 
pausa después de cada 5 líneas, para que dé tiempo a leerlo. 
Cuando el usuario pulse enter, se mostrarán las siguientes 5 líneas, 
y así hasta que se muestre todo el contenido.
*/

#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main(){
    char linea[250];
    int cl=0;

    ifstream file;
    file.open("C:/archivos/archivo2.txt");
    if(file.fail()){
        cout<<"No se pudo abrir el archivo"<<endl;
    }
    else{
        do{
            file.getline(linea,250);
            cout<<linea<<endl;
            cl++;
            if(cl==5){
                getchar();
                cl=0;
            }
        }while(!file.eof());
    }
    file.close();
}
