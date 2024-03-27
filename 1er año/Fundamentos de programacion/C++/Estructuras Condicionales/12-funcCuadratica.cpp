/**
 * Empleando como base el ejercicio de la unidad anterior (Ejercicio 22):
 * Permite ingresar 3 valores: a, b y c.
 * El programa debe mostrar por pantalla el valor de las 2 ra�ces.
 * Recuerde que para la ecuaci�n de segundo grado ax2+bx+c=0 las ra�ces se calculan a partir de la f�rmula
 * x=(-b�raiz(b^2-4ac))/2a
 * Realice: Modifica tu c�digo para que �analice� la funci�n
 * �La par�bola se ensancha o se estrecha?
 * �La par�bola es c�ncava hacia abajo (v�rtice m�ximo) o hacia arriba (v�rtice m�nimo)?
 * �Cu�les son los puntos de corte en el eje Y?
 * �Cu�l es el v�rtice de la par�bola?
 * �Qu� tipo de ra�ces tiene (reales o compleja)?
*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    //Declarar variables
    float a, b, c, baskharaP, baskharaN, raiz, verticex, verticey;
    //Datos
    cout <<"Ingresa los valores de a,b y c" << endl;
    cout<<"Recorda que ax2+bx+c=0 " <<endl;
    cout<<"a: "; cin>>a;
    cout<<"b: "; cin>>b;
    cout<<"c: "; cin>>c;
    //Logica
    raiz = sqrt(double(pow(b,2)-4*a*c));
    baskharaP = ((-b+raiz)/(2*a));
    baskharaN = ((-b-raiz)/(2*a));
    verticex = ((-b)/2*a);
    verticey = ((a*pow(verticex,2))+(b*verticex)+c);
    //Condicionales y respuestas
    cout << "Sus raices son: x1= "<<baskharaP<< " y x2= " << baskharaN << endl;
    if (a>1) {
        cout << "->La parabola se estrecha" << endl;
    }
    else if (a<1) {
        cout << "->La parabola se ensancha" << endl;
    }
    if (a>0) {
        cout << "-->La parabola es concava hacia arriba" << endl;
    }
    else if (a<0) {
        cout << "-->La parabola es concava hacia abajo" << endl;
    }
    cout <<"--->Corta en el eje y en el punto: (0," << c << ")" << endl;
    cout <<"---->El vertice de la parabola esta en el punto (" << verticex << "," << verticey <<")" << endl;
    if(raiz>=0) {
        cout << "----->Tiene raices reales" << endl;
    }
    else{
        cout << "----->Tiene raices complejas" << endl;
    }
    return 0;

}
