/*
El kiosko manolio tiene a la venta una serie de productos. Para cada producto se
dispone de:
○ Descripción (tira de caracteres de longitud 20).
○ Stock del producto (entero).
○ Año de vencimiento (entero).
Se le ha llamado a usted para que desarrolle un programa que permita leer la
información anterior mediante una estructura y generar un arreglo conteniendo los
datos de todos los productos del comercio. Luego debe ser capaz de procesar los
datos de modo que logre eliminar los productos vencidos y mostrar por pantalla
aquellos productos disponibles.
Aclaración:
Para determinar si un producto está vencido o no, simplemente basta con comparar
con el año en donde fue elaborado el programa.
*/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n;
    int contador = 0;
    struct productos
    {
        char descripcion[20];
        int stock;
        int vencimiento;
    };
    productos A[100];

    cout << "Ingrese la cantidad de productos: " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese la descripcion del producto: " << i + 1 << endl;
        cin.ignore();
        cin.getline(A[i].descripcion, 20, '\n');
        cout << "Ingrese el stock del producto: " << i + 1 << endl;
        cin >> A[i].stock;
        cout << "Ingrese el año de vencimiento del producto: " << i + 1 << endl;
        cin >> A[i].vencimiento;
    }
    for (int i = 0; i < n; i++)
    {
        if (A[i].vencimiento < 2023)
        {
            strcpy(A[i].descripcion, A[n - 1].descripcion);
            A[i].stock = A[n - 1].stock;
            A[i].vencimiento = A[n - 1].vencimiento;
            n--;
            i--;
        }
    }
    cout << "******************************PRODUCTOS************************************" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Descripcion: " << A[i].descripcion << endl;
        cout << "Stock: " << A[i].stock << endl;
        cout << "Vencimiento: " << A[i].vencimiento << endl;
        cout << "-----------------------------" << endl;
    }
    return 0;
}