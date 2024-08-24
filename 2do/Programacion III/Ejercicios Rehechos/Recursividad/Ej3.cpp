#include <iostream>
using namespace std;

int invertir(int n){
    if(n<10){
        return n;
    }else{
        cout << n%10;
        return invertir(n/10);
    }
}

int main(){
    int n;
    cout << "Ingrese un numero a invertir: " << endl;
    cin >> n;
    cout << "El numero invertido es: " << invertir(n);
}