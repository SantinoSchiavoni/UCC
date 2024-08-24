/*
Fibonacci
Cada elemento es esta secuencia es la suma de los dos precedentes.
Ej. 0 + 1 = 1, 1 + 1 = 2, 1 + 2 = 3, 2 + 3 = 5, ...
Entonces podemos definir la secuencia como:
*/

#include<iostream>
using namespace std;

int secuenciaFibonacci(int n){
    int fibo;
    if(n<=1){
        fibo = n;
    }
    else{
        fibo = secuenciaFibonacci(n-2) + secuenciaFibonacci(n-1);
    }
    return fibo;
}

int main(){
    int n;
    cout << "Ingrese un numero: "; cin>>n;
    cout << "El numero en la posicion " << n << " es: " << secuenciaFibonacci(n);
}