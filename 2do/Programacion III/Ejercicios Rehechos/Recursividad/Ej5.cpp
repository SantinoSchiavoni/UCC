/*
Crear un programa que pida al usuario un número entero positivo "n" y un dígito
"d". Luego crear una función recursiva que determine si “d” está en “n”. Si está, la
función debe retornar verdadero y si no está debe retornar falso.
Ej.: si n=1323 y d = 5, retorna Falso y si d= 1 retorna verdadero.
*/

#include <iostream>
using namespace std;

bool encontrarDigito(int n, int d){
    if(n==0 && d!=0){
        return false;
    }
    if(n==0 && d==0){
        return true;
    }
    if(n%10 == d){
        return true;
    }
    return encontrarDigito(n/10,d);
}

int main(){
    int n,d;
    cout << "Ingrese un numero y el digito a encontrar \n";
    cout << "Numero: ";cin >> n;
    cout << "Digito: ";cin >> d;
    if(encontrarDigito(n,d)==true){
        cout << "Verdadero" << endl;
    }
    else{
        cout << "Falso" << endl;
    }
}