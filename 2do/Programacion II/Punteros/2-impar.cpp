/*
Comprobar si un numero es par o impar, y señalar la posicion de memoria
donde se esta guardando el numero. Con punteros
*/
#include<iostream>
using namespace std;

int main(){
    int numero, *puntero;

    cout<<"Ingrese el numero"<<endl;
    cin>>numero;

    puntero=&numero;

    if(*puntero%2==0){
        cout<<"Es par"<<endl;
        cout<<"La direccion de memoria es: "<<puntero<<endl;
    }else{
        cout<<"Es impar"<<endl;
        cout<<"La direccion de memoria es: "<<puntero<<endl;
    }
    return 0;
}