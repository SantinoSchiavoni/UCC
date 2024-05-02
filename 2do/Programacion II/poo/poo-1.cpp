#include <iostream>
using namespace std;

class persona {
    
    private:
    string nombre;
    int edad;

    public:
    persona (string, int);
    void comer();
    void estudiar();
    void trabajar();
};

persona::persona(string x, int y){
    nombre = x;
    edad = y;
}

void persona::comer(){
    cout << nombre << " esta comiendo una rica comida" << endl;
}

void persona::estudiar(){
    cout << nombre << " esta estudiando POO" << endl;
}

void persona::trabajar(){
    cout << nombre << " esta trabajando en la empresa" << endl;
}

int main(){
    string nombre1;
    int edad1;

    cout << "Ingrese el nombre de la persona: "<<endl;
    cin >> nombre1;

    cout << "Ingrese la edad de la persona: "<<endl;
    cin >> edad1;

    persona p1(nombre1, edad1);

    p1.comer();
    p1.estudiar();
    p1.trabajar();
}