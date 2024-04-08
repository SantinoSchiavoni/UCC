/**
 * Empleando como base el ejercicio de la unidad anterior (Ejercicio 22):
 * Permite ingresar 3 valores: a, b y c.
 * El programa debe mostrar por pantalla el valor de las 2 raíces.
 * Recuerde que para la ecuación de segundo grado ax2+bx+c=0 las raíces se calculan a partir de la fórmula
 * x=(-b±raiz(b^2-4ac))/2a
 * Realice: Modifica tu código para que “analice” la función
 * ¿La parábola se ensancha o se estrecha?
 * ¿La parábola es cóncava hacia abajo (vértice máximo) o hacia arriba (vértice mínimo)?
 * ¿Cuáles son los puntos de corte en el eje Y?
 * ¿Cuál es el vértice de la parábola?
 * ¿Qué tipo de raíces tiene (reales o compleja)?
*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    //Declarar variables
    float a, b, c, baskharaP, baskharaN, raiz;
    //Datos
    cout <<"Ingresa los valores de a,b y c" << endl;
    cout<<"Recorda que ax2+bx+c=0 " <<endl;
    cout<<"a: "; cin>>a;
    cout<<"b: "; cin>>b;
    cout<<"c: "; cin>>c;
    //Logica
    //baskharaP = (((-b)+(sqrt((pow(b,2))-4*a*c,2)))/(2*a));
    baskharaP = ((-b+sqrt(double(pow(b,2)-4*a*c)))/(2*a));
    //baskharaN = (((-b)-(sqrt((pow(b,2))-4*a*c,2)))/(2*a));
    baskharaN = ((-b-sqrt(double(pow(b,2)-4*a*c)))/(2*a));
    cout << baskharaN << ", " << baskharaP <<endl;
}
