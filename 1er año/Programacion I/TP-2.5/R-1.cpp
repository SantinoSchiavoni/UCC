/*
Obtener un programa que permita ingresar N números enteros, los almacene en un vector y obtenga:
 La suma de los números pares
 La suma de los números impares.
 La suma de los números que ocupan posiciones pares del vector.
 La suma de los números que ocupan posiciones impares del vector,
*/

#include <iostream>
using namespace std;

void ingreso(int n, int v[]){
    for(int i=0;i<n;i++){
        cout<<"Ingrese el elemento "<<i+1<<endl;
        cin>>v[i];
    }
}

int sumaPares(int n, int v[]){
    int suma=0;
    for(int i=0;i<n;i++){
        if(v[i]%2==0){
            suma+=v[i];
        }
    }
    return suma;
}

int sumaImpares(int n,int v[]){
    int suma=0;
    for(int i=0;i<n;i++){
        if(v[i]%2!=0){
            suma+=v[i];
        }
    }
    return suma;
}

int sumaPosPar(int n, int v[]){
    int suma=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            suma+=v[i];
        }
    }
    return suma;
}

int sumaPosImpar(int n, int v[]){
    int suma=0;
    for(int i=0;i<n;i++){
        if(i%2!=0){
            suma+=v[i];
        }
    }return suma;
}

int main(){
    int n, v[100];
    cout<<"Ingrese el tamaño del vector"<<endl;
    cin>>n;
    ingreso(n,v);
    cout<<"La suma de los numeros pares es: "<<sumaPares(n,v)<<endl;
    cout<<"La suma de los numeros impares es: "<<sumaImpares(n,v)<<endl;
    cout<<"La suma de los numeros que ocupan posiciones pares es: "<<sumaPosPar(n,v)<<endl;
    cout<<"La suma de los numeros que ocupan posiciones impares es: "<<sumaPosImpar(n,v)<<endl;
    return 0;
}