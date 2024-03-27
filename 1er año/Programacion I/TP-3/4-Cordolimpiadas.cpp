/*
La municipalidad está organizando las Cordolimpiadas. Se dispone de la información
correspondiente a un grupo de N atletas (máximo 100). Para cada uno se tienen los
siguientes datos:
○ Deporte (tira de caracteres de longitud 20).
○ Número de medallas obtenidas (entero).
○ Datos personales (Estructura):
i. Nombre (tira de caracteres, longitud 20).
ii. Fecha de nacimiento.(día, mes y año).
iii. País de origen (tira de caracteres de longitud 20).
Implementar un programa el cual, luego de solicitar el ingreso de la información
antes detallada, muestre los datos del atleta que ha ganado mayor número de
medallas
*/
#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int n;
    struct fecha{
        int dia;
        int mes;
        int anio;
    };
    struct persona{
        char nombre[20];
        int edad;
        char pais[20];
        fecha FechaNacimiento;
    };
    struct atleta{
        char deporte[20];
        int medallas;
        persona DatosPersonales;
    };
    atleta A[100];

    cout << "Ingrese la cantidad de atletas: " << endl;
    cin >> n;
    for(int i=0;i<n;i++){
        cout<<"Ingrese el deporte: "<<i+1<<endl;
        cin.ignore();
        cin.getline(A[i].deporte,20,'\n');
        cout<<"Ingrese la cantidad de medallas: "<<i+1<<endl;
        cin>>A[i].medallas;
        cout<<"Ingrese el nombre: "<<i+1<<endl;
        cin.ignore();
        cin.getline(A[i].DatosPersonales.nombre,20,'\n');
        cout<<"Ingrese la edad: "<<i+1<<endl;
        cin>>A[i].DatosPersonales.edad;
        cout<<"Ingrese el pais: "<<i+1<<endl;
        cin.ignore();
        cin.getline(A[i].DatosPersonales.pais,20,'\n');
        cout<<"Ingrese el dia de nacimiento: "<<i+1<<endl;
        cin>>A[i].DatosPersonales.FechaNacimiento.dia;
        cout<<"Ingrese el mes de nacimiento: "<<i+1<<endl;
        cin>>A[i].DatosPersonales.FechaNacimiento.mes;
        cout<<"Ingrese el año de nacimiento: "<<i+1<<endl;
        cin>>A[i].DatosPersonales.FechaNacimiento.anio;
    }
    int mayor=0;
    for(int i=0;i<n;i++){
        if(A[i].medallas>mayor){
            mayor=A[i].medallas;
        }
    }
    for(int i=0;i<n;i++){
        if(A[i].medallas==mayor){
            cout<<"Deporte: "<<A[i].deporte<<endl;
            cout<<"Medallas: "<<A[i].medallas<<endl;
            cout<<"Nombre: "<<A[i].DatosPersonales.nombre<<endl;
            cout<<"Edad: "<<A[i].DatosPersonales.edad<<endl;
            cout<<"Pais: "<<A[i].DatosPersonales.pais<<endl;
            cout<<"Fecha de nacimiento: "<<A[i].DatosPersonales.FechaNacimiento.dia<<"/"<<A[i].DatosPersonales.FechaNacimiento.mes<<"/"<<A[i].DatosPersonales.FechaNacimiento.anio<<endl;
            cout<<"---------------------------------"<<endl;
        }
    }
    return 0;
}
