/*
Crear un programa que defina dos punteros a tipos de datos int y float.
Acceder mediante estos punteros a otras variables de tipo int y float
*/

#include<iostream>
using namespace std;

int main(){
    int numero1, *pnumero1;
    float numero2, *pnumero2;

    cout<<"Indique el valor del numero 1"<<endl;
    cin>>numero1;

    cout<<"Indique el valor del numero 2"<<endl;
    cin>>numero2;

    pnumero1=&numero1;
    pnumero2=&numero2;

    cout<<"La direccion de la variable 1 es "<<pnumero1<<"y el valor es "<<*pnumero1<<endl;
    cout<<"La direccion de la variable 2 es "<<pnumero2<<"y el valor es "<<*pnumero2<<endl;

    return 0;
}
