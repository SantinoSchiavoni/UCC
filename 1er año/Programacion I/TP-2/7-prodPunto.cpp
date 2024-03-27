/*
Realizar un programa que calcule el producto punto o producto escalar entre dos
vectores de N componentes. El valor de N debe ser solicitado previamente para
dimensionar los arreglos, y luego se deben completar ambos arreglos.
*/

#include<iostream>
using namespace std;

int prod_punto(int longitud, int a[], int b[]){
    int prod_punto=0,prod_homologos;
        for(int i=0;i<longitud;i++){
        prod_homologos=a[i]*b[i];
        prod_punto+=prod_homologos;
    }
    return prod_punto;
}

int main(){
    int vector1[100], vector2[100], componentes;
    cout<<"Ingrese la cantidad de componentes de los vectores"<<endl;
    cin>>componentes;
    for(int i=0;i<componentes;i++){
        cout<<"ingrese el valor a["<<i<<"]"<<endl;
        cin>>vector1[i];
    }
    for(int i=0;i<componentes;i++){
        cout<<"ingrese el valor b["<<i<<"]"<<endl;
        cin>>vector2[i];
    }
    cout<<"El producto punto es: "<<prod_punto(componentes,vector1,vector2)<<endl;
    return 0;
}