
#include <iostream>
using namespace std;

template <class TParam> // Corregido para que coincida con el uso en los parámetros de la función
void myswap(TParam &X, TParam &Y){
    TParam temp = X;
    X = Y;
    Y = temp;
    cout << "X: " << X << " Y: " << Y << endl;
}

int main() {
    int A = 5;
    int B = 6;
    myswap(A, B);

    float X = 3.1;
    float Y = 5.8;
    myswap(X, Y);
}