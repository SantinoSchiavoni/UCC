/*Desarrollar un programa en el cual el usuario introduce un número entero positivo e
invierta los dígitos del número. Muestre en pantalla el número invertido*/

#include <iostream>
using namespace std;

int FuncionInvertir (int numero){
    int resto,ninvertir;
    ninvertir=numero%10;
while (numero>10) {
        numero=numero/10;
        resto=numero%10;
        ninvertir=(ninvertir*10)+resto;
    }

return ninvertir;
}

int main(){
    int num;
    cout<<"Ingrese un numero para invertir"<<endl;
    cin>>num;
    cout<<"El numero invertido es: "<<FuncionInvertir(num)<<endl;
    return 0;
}