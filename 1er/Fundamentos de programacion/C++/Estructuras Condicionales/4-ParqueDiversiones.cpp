/**De acuerdo a la altura de una persona, se le permite entrar a un juego en un parque de diversiones.
Para poder subirse a la montaña rusa, la persona debe medir 1,30 mts o más, caso contrario no puede.*/

#include <iostream>
using namespace std;

int main (){
    //Declarar Variables
    int alturaP;
    //Datos
    cout << "Ingresa la altura en cm" << endl;
    cout << "altura: ";
    cin >> alturaP;
    //Logica
    if (alturaP >= 130) {
        cout << "Puede ingresar al juego";
    }
        else {
            cout << "No puede ingresar al juego" << endl;
        }
    return 0;
}
