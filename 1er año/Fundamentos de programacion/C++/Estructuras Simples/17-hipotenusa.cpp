//El usuario debe ingresar la longitud de los catetos de un triángulo rectángulo.
//El programa debe calcular el valor de la hipotenusa: h=raiz(c1^2+c2^2).

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	//Declarar Variables
	float hipotenusa, catAdy, catOp;
	//Datos
	cout << "Ingresa el valor de longitud de los catetos" << endl;
	cout << "Cateto Adyacente: ";
	cin >> catAdy;
	cout << "Cateto Opuesto: ";
	cin >> catOp;
	//Logica
	hipotenusa = sqrt((pow(catAdy,2))+(pow(catOp,2)));
	//Mostrar
	cout << "El valor de la hipotenusa es: " << hipotenusa << endl;
	return 0;
}
