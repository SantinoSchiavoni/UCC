#include <iostream>
using namespace std;

int potencias(int base, int exp){
    if(exp == 0){ //Caso base
        return 1; //Cualquier numero elevado a 0 es 1
    }else{
        return base * potencias(base,exp-1); //Caso recursivo, exp-1 caso de finalizacion
    }
}

int main(){
    int base, exp;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exp;
    cout << "El resultado de elevar " << base << " a la " << exp << " es: " << potencias(base,exp) << endl;
    return 0;
}