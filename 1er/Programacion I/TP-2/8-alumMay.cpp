/*
Elaborar un algoritmo que lea los nombres y edades de 10 alumnos, almacene los
nombres de aquellos estudiantes mayores de 19 años y luego imprima los nombres
de los alumnos almacenados. Utilice vectores.
*/

#include<iostream>
using namespace std;

int main(){
    string nombre[10], nombre_may[10];
    int edad[10];
    for(int i=0;i<10;i++){
        cout<<"Ingrese el nombre y la edad del "<<i+1<<" alumno"<<endl;
        cout<<"Nombre: "; cin>>nombre[i];
        cout<<"Edad: ";cin>>edad[i];
    }
    cout<<"Los alumnos que cumplen con el requisito son: "<<endl;
    for(int i=0;i<10;i++){
        if(edad[i]>19){
            nombre_may[i]=nombre[i];
            cout<<"--> "<<nombre_may[i]<<endl;
        }    
    }
return 0;
}