/*
Desarrolle un programa que reciba como parámetros dos enteros, uno que defina la
longitud del arreglo y otro que llamaremos base. Una función debe rellenar el arreglo
con los múltiplos de nuestro número base e imprimirlo.
*/

#include<iostream>
using namespace std;

int main(){
    int longitud, base , a[100];

    cout<<"Ingrese la longitud del arreglo"<<endl;
    cin>>longitud;
    cout<<"Ingrese la base"<<endl;
    cin>>base;
    cout<<""<<endl;

    for(int i=0;i<longitud;i++){
        a[i]=base*(i+1);
        cout<<a[i]<<endl;
    }
    return 0;
    
}