//Al recibir 3 datos de entrada, R, T y Q
//calcule si los mismos satisfacen la siguiente expresión: R^4-T^3+4×Q^2 < 82

#include<iostream>
#include<cmath>
using namespace std;

int main() {
    //Definir Variables
    float r, t, q, expresion;
    //Datos
    cout << "Ingrese los valores de R, T y Q" << endl;
    cout << "R: ";
    cin >> r;
    cout<< "T: ";
    cin >> t;
    cout << "Q: ";
    cin >> q;
    //Logica
    expresion = (pow(r,4))-(pow(t,3))+(4*pow(q,2));
    cout << expresion << endl;
    if (expresion >= 820) {
        cout << "No satisface la condicion" << endl;
    }
        else {
           cout << "Satisface la condicion" <<endl;
        }
    return 0;
}
