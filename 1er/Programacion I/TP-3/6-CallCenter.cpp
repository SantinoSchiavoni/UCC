/*
En un call center están teniendo problemas para manejar la información de sus
empleados, así que lo llamaron a usted para que desarrolle un programa que
permita definir un arreglo unidimensional de 10 posiciones donde cada elemento es
una estructura empleado que contiene:
○ Nombre
○ Dirección (calle, número, localidad)
○ Edad
○ Sexo (M/F)
Además el programa debe ser capaz de realizar las siguientes operaciones:
● Permite ingresar la información de los empleados.
● Listar los empleados menores de 25 años.
● Listar los empleados que viven en Avellaneda.
● Ordenar el vector por nombre y listarlo.
*/

#include <iostream>
#include <string.h>
using namespace std;

struct dire{
    char calle[20];
    char numero[20];
    char localidad[20];
};
struct empleado{
    char nombre[20];
    int edad;
    char sexo;
    dire direccion;
};

void menu(){
    cout << "**********MENU**********" << endl;
    cout << "************************" << endl;
    cout << "1. AGREGAR INFO EMPLEADOS" << endl;
    cout << "2. LISTAR EMPLEADOS MENORES DE 25 AÑOS" << endl;
    cout << "3. LISTAR EMPLEADOS DE AVELLANEDA" << endl;
    cout << "4. ORDENAR" << endl;
    cout << "5. SALIR" << endl;
}

void agregar(empleado x[], int &n){
    cout<<"Ingrese el nombre del empleado"<<endl;
    cin.ignore();
    cin.getline(x[n].nombre,20,'\n');
    cout<<"Ingrese la edad del empleado"<<endl;
    cin>>x[n].edad;
    cout<<"Ingrese el sexo del empleado"<<endl;
    cin>>x[n].sexo;
    cout<<"Ingrese la calle del empleado"<<endl;
    cin.ignore();
    cin.getline(x[n].direccion.calle,20,'\n');
    cout<<"Ingrese el numero del empleado"<<endl;
    cin.getline(x[n].direccion.numero,20,'\n');
    cout<<"Ingrese la localidad del empleado"<<endl;
    cin.getline(x[n].direccion.localidad,20,'\n');
    n++;
    
}

void lista_menores25(empleado x[], int n){
    cout << "**********LISTA MENORES DE 25**********" << endl;
    for (int i = 0; i < n; i++)
    {
        if(x[n].edad<25){
            cout<<"Nombre: "<<x[n].nombre<<endl;
            cout<<"Edad: "<<x[n].edad<<endl;
            cout<<"Sexo: "<<x[n].sexo<<endl;
            cout<<"Calle: "<<x[n].direccion.calle<<endl;
            cout<<"Numero: "<<x[n].direccion.numero<<endl;
            cout<<"Localidad: "<<x[n].direccion.localidad<<endl;
        }
    }
}

void lista_avellaneda(empleado x[], int n){
    cout << "**********LISTA AVELLANEDA**********" << endl;
    for (int i = 0; i < n; i++)
    {
        if(strcmp(x[n].direccion.localidad,"Avellaneda")==0){
            cout<<"Nombre: "<<x[n].nombre<<endl;
            cout<<"Edad: "<<x[n].edad<<endl;
            cout<<"Sexo: "<<x[n].sexo<<endl;
            cout<<"Calle: "<<x[n].direccion.calle<<endl;
            cout<<"Numero: "<<x[n].direccion.numero<<endl;
            cout<<"Localidad: "<<x[n].direccion.localidad<<endl;
        }
    }
}

void ordenar_listar(){

}

int main(){
    empleado A[100];
    int ncanciones=0,opcion;

 do
    {
        menu();
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        cout << " " << endl;
        switch (opcion)
        {
        case 1:
        agregar(A,ncanciones);
            break;
        case 2:
            lista_menores25(A,ncanciones);
            break;
        case 3:
            lista_avellaneda(A,ncanciones);
            break;
        case 4:
            break;
        }
    } while (opcion != 5);

}