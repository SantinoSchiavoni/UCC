//Permitir que el usuario ingrese un ángulo en grados.
//Mostrar en pantalla la conversión a radianes. (Recuerde que 180º=𝝅)

#include<iostream>
using namespace std;

int main(){
	//Declarar Variables
	float grados, rad;
	const float pi = 3.14159265;
	//Datos
	cout << "Ingresá el angulo en grados" << endl;
	cin >> grados;
	//Logica
	rad = (pi * grados)/180
	//Mostrar
	cout << grados << " [°] equivalen a " << rad << " [rad]" << endl;
	return 0;
}
