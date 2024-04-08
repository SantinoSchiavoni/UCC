/*
Obtener un programa que lea un archivo “texto.txt” 
y genere 2 archivos. uno con la cantidad de veces que esta 
la palabra "noviembre" en el archivo texto.txt y el otro con la cantidad de veces que esta la palabra "enero".
*/

#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main(){
    char linea[250];
    int l, nov=0, ene=0;

    ifstream file1;
    ofstream file2;
    ofstream file3; 


    file1.open("C:/archivos/Asistencia/textoasistencia.txt");
    file2.open("C:/archivos/Asistencia/noviembre.txt"); 
    file3.open("C:/archivos/Asistencia/enero.txt"); 

    if(file1.fail()){
        cout<<"No se pudo abrir el archivo"<<endl;
    }
    else{
        do{
            file1.getline(linea,250);
            if(strcmp(linea,"noviembre")==0){
                nov++;
            }
            else if(strcmp(linea,"enero")==0){
                ene++;
            }
        
        }while(!file1.eof());
            file2<<"Noviembre aparece: "<<nov<<" veces"<<endl;
            file3<<"Enero aparece: "<<ene<<" veces"<<endl;
    }
    file1.close();
    file2.close();
    file3.close();  
}