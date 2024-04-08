/*
Se está desarrollando un torneo de fútbol entre colegios, y necesitamos que usted
desarrolle un programa que defina una estructura llamada Equipos que permita
contener los datos relativos a equipos de fútbol. Los datos a considerar son:
○ Nombre del equipo (tira de caracteres de longitud 20).
○ Cantidad de goles realizados (entero).
○ Cantidad de goles recibidos (entero).
Ingresar la información correspondiente a un grupo de ocho equipos y memorizar en
un arreglo. Mostrar como resultado los datos completos de los equipos cuya
cantidad de goles realizados supere a los recibidos.
*/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    struct equipo
    {
        char nombre[20];
        int golesRealizados;
        int golesRecibidos;
    };
    equipo A[8];

    for (int i = 0; i < 8; i++)
    {
        cout << "Ingrese el nombre del equipo: " << i + 1 << endl;
        cin.ignore();
        cin.getline(A[i].nombre, 20, '\n');
        cout << "Ingrese la cantidad de goles realizados: " << i + 1 << endl;
        cin >> A[i].golesRealizados;
        cout << "Ingrese la cantidad de goles recibidos: " << i + 1 << endl;
        cin >> A[i].golesRecibidos;
    }
    for (int i = 0; i < 8; i++)
    {
        if (A[i].golesRealizados > A[i].golesRecibidos)
        {
            cout << "Nombre del equipo: " << A[i].nombre << endl;
            cout << "Goles realizados: " << A[i].golesRealizados << endl;
            cout << "Goles recibidos: " << A[i].golesRecibidos << endl;
            cout << "------------------------------" << endl;
        }
    }
}