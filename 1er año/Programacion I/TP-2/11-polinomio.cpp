/*
Desarrollar un programa que posibilite la representación de un polinomio completo
de grado N, almacenando los N coeficientes en un arreglo. Luego, se solicitará
ingresar un valor X y el programa calculará el resultado de evaluar el polinomio en
ese valor. Para abordar este problema, es necesario utilizar funciones.
*/

#include<iostream>
#include<cmath>
using namespace std;

int polinomio(int n,int a[100], int x){
    int suma=0, pivot_grado=n;
    for(int i=n;i>=0;i--){
        suma = suma + (a[i] * pow(x,pivot_grado)) ;
        pivot_grado--;
    }
    return suma;
}

int main(){
    int grado, incognita, b[100];
    cout<<"Ingrese el grado del polinomio"<<endl;
    cout<<"grado: "; cin>>grado;
    for(int i=grado;i>=0;i--){
        cout<<"Ingrese el coeficiente de X^ "<<i<<endl;
        cin>>b[i];
    }
    cout<<"Ingrese el valor de la incognita"<<endl;
    cin>>incognita;
    cout<<"El resultado es: "<<polinomio(grado, b, incognita)<<endl;
    return 0;
}