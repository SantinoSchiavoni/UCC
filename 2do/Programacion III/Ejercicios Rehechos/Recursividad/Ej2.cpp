#include <iostream>
using namespace std;

int sumatoria(int n){
    if(n == 0){
        return 0;
    }else{
        return n + sumatoria(n-1);
    }
}

int main(){
    int n;
    cout << "Ingrese un numero: "; cin >> n;
    cout << "La sumatoria es: " << sumatoria(n);
}