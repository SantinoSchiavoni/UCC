//el cajero debe poder ingresar el monto de dinero a pagar
//y el monto de dinero que entregó el cliente.
//Debe salir por pantalla el resultado del cambio que debe ser devuelto.
//(se asume que el cliente paga un monto mayor al precio del producto).

#include<iostream>
using namespace std;

int main() {
    //Declarar Variables
    float monto_a_pagar, dinero_entregado, vuelto;
    //Datos
    cout << "Ingresa el monto a pagar" << endl;
        cout << "$ ";
        cin >> monto_a_pagar;
    cout << "Ingresa el monto que entrego el cliente" << endl;
        cout << "$ ";
        cin >> dinero_entregado;
    //Logica
    vuelto = (dinero_entregado)-(monto_a_pagar);
    //Mostrar
    cout << "se debe devolver al cliente $" << vuelto << " de cambio" << endl;
    return 0;
}
