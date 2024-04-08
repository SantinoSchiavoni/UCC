/*La función debe recibir como parámetro un número ‘n’, 
y debe imprimir por pantalla el factorial de ese número*/

#include<iostream>
using namespace std;

int factorial(float numusuario){ //Funcion para calculo de factorial

float multiplicador, summutiplicacion;

multiplicador=numusuario-1;
summutiplicacion=numusuario;

while (multiplicador!=0) {
    summutiplicacion=(summutiplicacion*multiplicador);
    multiplicador=multiplicador-1;
}
    return summutiplicacion;
}

int main(){ //Funcion Principal
    float num2;
    cout<<"Ingrese un numero"<<endl;
    cin>>num2;
    cout<<"El factorial del numero ingresado es "<<factorial(num2)<<endl;
    return 0;
}