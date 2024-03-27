/*
Una empresa Arg. contrata a ud para que desarrolle un programa que permita controlar la nomina
de N empleados segun la siguiente informacion:
-nombre
-legajo
-sueldo
Su programa necesita devolver archivos que solucionen las siguientes consignas:
a)Nombres de los empleados que ganan mas de $500.000
b)Listar en orden descendente ordenados por sueldo.
*/

#include <iostream>
#include <fstream>
#include <string.h>
#include <windows.h>

using namespace std;

struct empleado
{
    char nombre[30];
    int legajo;
    int sueldo;
};

void cargar(empleado x[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el nombre del empleado" << endl;
        cin.ignore();
        cin.getline(x[i].nombre, 30, '\n');
        cout << "Ingrese el legajo del empleado" << endl;
        cin >> x[i].legajo;
        cout << "Ingrese el sueldo del empleado" << endl;
        cin >> x[i].sueldo;
    }
}

void puntoA(empleado x[], int n)
{
    ofstream file1;

    file1.open("C:/archivos/TP-4-5/nombres.txt");

    if (file1.fail())
    {
        cout << "No se pudo abrir el archivo" << endl;
    }
    else
    {
        file1 << "Los empleados que ganan mas de $500.000 son: " << endl;
        for (int i = 0; i < n; i++)
        {
            if (x[i].sueldo > 500000)
            {
                file1 << x[i].nombre << endl;
            }
        }
    }
    file1.close();
}

void puntoB(empleado x[], int n, empleado aux)
{
    bool bandera = 0;
    ofstream file2;

    file2.open("C:/archivos/TP-4-5/ListadoSueldo.txt");

    while (bandera == 0)
    {
        bandera = 1;
        for (int j = 0; j < n; j++)
        {
            if (x[j].sueldo < x[j + 1].sueldo)
            {
                aux = x[j];
                x[j] = x[j + 1];
                x[j + 1] = aux;
                bandera = 0;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        file2 << "Empleado " << i + 1 << endl;
        file2 << x[i].nombre << endl;
        file2 << "$ " << x[i].sueldo << endl;
        file2 << "" << endl;
    }
    file2.close();
}

int main()
{
    int n;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 5);

    cout << "Ingrese la cantidad de empleados: " << endl;
    cin >> n;
    empleado A[n], aux;

    cargar(A, n);
    puntoA(A, n);
    puntoB(A, n, aux);
}