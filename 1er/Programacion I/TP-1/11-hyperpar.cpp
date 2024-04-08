/*Desarrolle un programa que reciba un parámetro de tipo entero y retorne True si es
hyper-par o False en caso contrario.
Un número es hyper-par cuando todos sus dígitos son pares.*/

#include <iostream>
using namespace std;

bool hyperpar(int numero){
    int digito;
    while(numero>0){
        digito = numero%10;
        numero = numero/10;
        if(digito % 2 !=0){
            return false;
        } 
    }
    return true;
}

int main(){
    int num_ingresado;
    cout<<"Ingrese un numero"<<endl;
    cin>>num_ingresado;

    if(hyperpar(num_ingresado)){
        cout<<"El numero ingresado es hyperpar"<<endl;
    } else{
        cout<<"El numero ingresado no es hyperpar"<<endl;
    }
return 0;
}
