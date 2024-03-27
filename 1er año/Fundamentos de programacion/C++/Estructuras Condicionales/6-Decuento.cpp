//Permite a un cajero ingresar la forma de pago (efectivo o tarjeta) y el monto a pagar.
//En caso de haber abonado en efectivo, se realizará un descuento del 10%.

#include<iostream>
#include<cmath>
using namespace std;

int main () {
    //Declarar Variables
    float montoaPagar;
    bool medio;
    //Datos
    cout << "Ingrese el monto a pagar" << endl;
    cout << "$: ";
    cin >> montoaPagar;
    cout << "Ingrese 1 si abona en efectivo, ingrese 0 si paga con tarjeta" << endl;
    cin >> medio;
    //Logica
    if (medio) {
        montoaPagar *= 0.9; //montoapagar = montoapagar * 0.9
    }
    cout << "Usted va a pagar $: " << montoaPagar <<endl;
return 0;

}
