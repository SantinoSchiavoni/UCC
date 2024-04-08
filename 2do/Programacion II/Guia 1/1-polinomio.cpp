/*
Representar un polinomio completo de grado n mediante un arreglo. Ingresar el grado del polinomio y sus coeficientes
A continuacion, ingresar un valor de x y calcular el valor del polinomio en ese punto.Utilizar funciones en la resolucion
*/

#include <iostream>
#include <cmath>
using namespace std;


int calculo(int polinomio[], int grado, int x){
    int resultado=0;
    for(int i=0; i<=grado;i++){
        resultado+=polinomio[i]*pow(x,i);
    }
    return resultado;
}

void pol(int polinomio[], int grado, int x){
    cout<<"Ingrese el grado del polinomio: "<<endl;
    cin>>grado;
    cout<<"Ingrese x"<<endl;
    cin>>x;
    for(int i=0;i<=grado;i++){
        cout<<"Ingrese el coeficiente de x^"<<i<<": ";
        cin>>polinomio[i];
    }
        cout<<"El valor del polinomio en "<<x<<" es: "<<calculo(polinomio, grado, x)<<endl;
}


int main(){
    int polinomio[100], grado, x;
    pol(polinomio, grado, x);
    return 0;
}