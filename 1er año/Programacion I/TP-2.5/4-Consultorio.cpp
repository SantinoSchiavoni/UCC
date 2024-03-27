/*
En un consultorio médico se lleva registro de los pacientes con diabetes que son
atendidos. Siempre se atienden 8 pacientes por día. Para los cuales se pide el
nombre, la edad, y las visitas previas que tiene. Conforme a estos datos determinar:
cantidad de pacientes con más de 4 visitas previas. Nombre y edad de los 3
pacientes más longevos atendidos en el día. Nombre del paciente más joven
atendido en el día.
*/

#include <iostream>
using namespace std;

void pacientes(string nombre[], int edad[], int visitas[]){
    int i=0, j=0, aux_edad, cont_visitas=0;
    string aux_nombre;
    bool bandera = 0;

    while(bandera==0){
        bandera=1;
        for(j=0;j<7;j++){
                if(edad[j]<edad[j+1]){
                aux_edad = edad[j];
                edad[j]=edad[j+1];
                edad[j+1]=aux_edad;

                aux_nombre = nombre[j];
                nombre[j]=nombre[j+1];
                nombre[j+1]=aux_nombre;
                bandera=0;
            }
        }
    }

    for(i=0;i<8;i++){
        if(visitas[i]>4){
            cont_visitas++;
        }
    }
    cout<<endl;
    cout<<"--------------"<<endl;
    cout<<endl;
    
    cout<<"->La cantidad de pacientes con mas de 4 visitas previas es: "<<cont_visitas<<endl;

    cout<<"->Los pacientes mas longevos son: "<<endl;
    for(int i=0; i<3; i++){
        cout<<"-->Nombre: "<<nombre[i]<<" de edad: "<<edad[i]<<endl;
    }
    cout<<"--->El paciente mas joven es: "<<nombre[7]<<endl;


}

int main(){
    string nombre[8]; 
    int edad[8];
    int visitas[8];

    for(int i=0;i<8;i++){
        cout<<"Ingrese el nombre del paciente "<<i+1<<": "<<endl;
        cin>>nombre[i];
        cout<<"Ingrese la edad del paciente "<<i+1<<": "<<endl;
        cin>>edad[i];
        cout<<"Ingrese la cantidad de visitas previas del paciente "<<i+1<<": "<<endl;
        cin>>visitas[i];
    }
    pacientes(nombre, edad, visitas);
    return 0;
}