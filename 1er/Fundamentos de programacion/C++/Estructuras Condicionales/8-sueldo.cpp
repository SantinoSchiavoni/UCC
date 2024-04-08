//En una empresa se decidió aumentar en un 12% el sueldo de aquellos empleados que cobren menos de $18.000.
//El programa debe permitir ingresar el sueldo del empleado
//y si corresponde mostrar el mensaje “El empleado tiene un aumento. Su nuevo sueldo es:”.

#include<iostream>
using namespace std;

int main() {
    //Declarar Variables
    int sueldo;
    //Datos
    cout << "Ingrese el sueldo del empleado" << endl;
    cout << "$: "; cin >> sueldo;
    //Logica
    if (sueldo <= 18000) {
        sueldo *= 1.2;
        cout << "El empleado tiene un aumento. Su nuevo sueldo es: $" << sueldo << endl;
    }
    else {
        cout << "no tiene aumento" << endl;
    }
    return 0;
}
