//El usuario debe poder ingresar el monto a pagar, y el dinero abonado
//(se supone que siempre el dinero abonado es mayor al dinero gastado,
//y que estos números son enteros).
// Considerando que el cajero solo posee billetes de las siguientes denominaciones
//50,20, 10,5, $1,
//calcule la cantidad de cada tipo de billete que deben ser entregados como vuelto.

#include <iostream>
using namespace std;

int main(){
	//Declarar Variables
	float aPagar, abonado;
	int resto, vuelto, b50, b20, b10, b5, b1;
	//Datos
	cout << "Ingresa el monto a pagar y el dinero abonado" << endl;
	cout << "monto a pagar = $ ";
	cin >> aPagar;
	cout << "monto abonado = $ ";
	cin >> abonado;
	//Logica
	vuelto = abonado - aPagar;
	resto = vuelto;
    b50 = vuelto/50;
    vuelto = vuelto%50;
    b20 = vuelto/20;
    vuelto = vuelto%20;
    b10 = vuelto/10;
    vuelto = vuelto%10;
    b5  = vuelto/5;
    vuelto  = vuelto%5;
    b1  = vuelto/1;
    vuelto  = vuelto%1;
	//Mostrar
	cout << "-->El vuelto es igual a $" << resto << endl;
	cout << "--->Cantidad de billetes de $50: " << b50 << endl;
	cout << "--->Cantidad de billetes de $20: " << b20 << endl;
	cout << "--->Cantidad de billetes de $10: " << b10 << endl;
	cout << "--->Cantidad de billetes de $5: " << b5 << endl;
	cout << "--->Cantidad de billetes de $1: " << b1 << endl;
	return 0;
}
