/*Desarrolle un programa que reciba un parámetro de tipo entero y retorne si es o no
triangular. Luego, imprimir la conclusión.
Aclaración:
Un número N es triangular si y sólo si es la suma de los primeros N números
naturales, para cualquier N.
Ejemplo: 10 = 1 + 2 + 3 + 4; N=4.*/

#include <iostream>
using namespace std;

bool Triangular(int num) {
    int suma = 0;
    int i = 1;

    while (suma < num) {
        suma += i;
        i++;
    }
    return suma == num;
}

int main() {
    int numero;

    cout<<"Ingrese un numero:";
    cin>>numero;

    if (Triangular(numero)) {
        cout <<numero<< " es triangular "<<endl;
    }else{
        cout <<numero<< " no es triangular "<<endl;
    }
    return 0;
}

