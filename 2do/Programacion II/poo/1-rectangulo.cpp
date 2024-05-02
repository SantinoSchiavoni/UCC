/*
Construya una clase llamada rectángulo que tenga los siguientes atributos: largo y ancho.
 La clase debe tener los siguientes métodos: perimetro y area.
*/

#include <iostream>
using namespace std;

class rectangulo{
    
    private:
    float largo;
    float ancho;

    public:
    rectangulo (float, float);
    float perimetro();
    float area();
};

rectangulo::rectangulo(float x, float y){
    largo = x;
    ancho = y;
}

float rectangulo::perimetro(){
    return 2*largo + 2*ancho;
}

float rectangulo::area(){
    return largo*ancho;
}

int main(){
    float length, width;

    cout<<"Ingrese largo y ancho del rectángulo"<<endl;
    cin>>length>>width;

    rectangulo r1(length, width);

    cout<<"El perimetro del rectángulo es: "<<r1.perimetro()<<endl;
    cout<<"El area del rectángulo es: "<<r1.area()<<endl;
}

