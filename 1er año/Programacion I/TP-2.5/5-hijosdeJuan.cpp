/*
Juan tiene 5 hijos con edades diferentes que necesita organizar para inscribir a cada
uno en la escuela. Desarrolle un programa que organice los nombres de sus hijos
alfabéticamente y los muestre en la pantalla con sus respectivas edades.
*/

#include <iostream>
using namespace std;

void hijosJuan(string nombre[], int edad[]){
    int aux_edad;
    string aux_nombre;
    bool bandera=0;

        while(bandera==0){
        bandera=1;
        for(int j=0;j<4;j++){
                if(nombre[j]>nombre[j+1]){
                aux_nombre = nombre[j];
                nombre[j]=nombre[j+1];
                nombre[j+1]=aux_nombre;

                aux_edad = edad[j];
                edad[j]=edad[j+1];
                edad[j+1]=aux_edad;
                bandera=0;
            }
        }
    }
    cout<<endl;
    cout<<"--------------"<<endl;
    cout<<endl;
    
    for(int i=0;i<5;i++){
        cout<<nombre[i]<<" de "<<edad[i]<<endl;
    }
}

int main(){
    string nombre[5];
    int edad[5];

    for(int i=0;i<5;i++){
        cout<<"Ingrese el nombre del hijo "<<i+1<<": "<<endl;
        cin>>nombre[i];
        cout<<"Ingrese la edad del hijo "<<i+1<<": "<<endl;
        cin>>edad[i];
    }
    hijosJuan(nombre, edad);
    return 0;
}