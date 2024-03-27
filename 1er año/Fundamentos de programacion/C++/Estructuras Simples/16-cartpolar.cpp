//Realizar la conversión de coordenadas cartesianas (x, y) a polares (r, Ө).
//(Recuerde que 180º=𝝅)
//(En C++, recuerda incluir la libreria cmath para emplear las funciones atan y sqrt)

#include<iostream>
#include<cmath>

using namespace std;

int main(){
	//Declarar Variables
	float alfa, catAdy, catOp, hipotenusa, grados;
	const float pi = 3.14159265;
	//Datos
	cout << "Ingresa las coordenadas cartesianas" << endl;
	cout << "x: ";
	cin >> catAdy;
	cout << "y: ";
	cin >> catOp;
	//Logica
	alfa = atan(catOp/catAdy);
	hipotenusa = sqrt((pow(catAdy,2))+(pow(catOp,2)));
	grados = (180 * alfa)/pi; //	rad = (pi * grados)/180;
	//Mostrar
	cout << "Conversion a coordenadas polares: " << "(" << hipotenusa << "," << grados << ")" << endl;
	return 0;
}
