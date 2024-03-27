/*Desarrolle un programa que le solicite al usuario ingresar un valor de tipo entero y
determine si dicho número es capicúa. Luego, imprima el resultado al usuario
utilizando cout.
Aclaración:
Un número capicúa es cualquier número que se lee igual de izquierda a derecha que
de derecha a izquierda. Ejemplos: 161, 2992, 3003, 91019, 5005, 292, 2882, 2442,
etc.*/

#include<iostream>
using namespace std;

int capicua(int numero){
    int resto, numero_capicua;
    numero_capicua=numero%10;
    while(numero>10){
        numero = numero/10;
        resto = numero%10;
        numero_capicua = (numero_capicua*10)+resto;
    }
    return numero_capicua;
}

int main(){
    int numero_ing;

    cout<<"Ingrese su numero"<<endl;
    cin>>numero_ing;

    if(capicua(numero_ing) == numero_ing){
        cout<<"El numero ingresado es capicua"<<endl;
    }else {
        cout<<"El numero ingresado no es capicua"<<endl;
    }
    return 0;

}