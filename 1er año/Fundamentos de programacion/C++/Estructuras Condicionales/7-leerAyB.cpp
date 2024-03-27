//Leer dos números A y B, si A < B intercambiar sus valores de manera tal que en A quede siempre el mayor.
//Mostrar en pantalla el valor de A y B.

#include<iostream>
using namespace std;

int main () {
    //Declarar Variables
    float numeroA, numeroB, numeroPivot;
    //Datos
    cout << "Ingrese sus 2 numeros" << endl;
    cout << "A: ";
    cin >> numeroA;
    cout << "B: ";
    cin >> numeroB;
    //Logica
    if (numeroA < numeroB) {
        numeroPivot = numeroA;
        numeroA = numeroB;
        numeroB = numeroPivot;
    }
    cout << "el numero A vale: " << numeroA << ", el numero B vale: " << numeroB << endl;
    return 0;
}
