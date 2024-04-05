#include <iostream>

using namespace std;

class Persona {
private:
    string nombre;
    int edad;
public:
    void setNombre(string n);
    void setEdad(int e);
    string getNombre();
    int getEdad();
    int esMayorEdad();
};

void Persona::setNombre(string n)
{
    nombre = n;
}

void Persona::setEdad(int e)
{
    edad = e;
}

string Persona::getNombre()
{
    return nombre;
}

int Persona::getEdad()
{
    return edad;
}

int Persona::esMayorEdad()
{
    int respuesta = 0;
    if (edad>=18)
    {
        respuesta = 1;
    }
    else
    {
       respuesta = 0;
    }
    return respuesta;
}


int main()
{
    Persona persona;
    persona.setNombre("pepe");
    persona.setEdad(20);

    if (persona.esMayorEdad()==1){
        cout<<"Mayor de edad"<<endl;
    }
    else{
        cout<<"Menor de edad"<<endl;
    };

    cout<< "Los datos ingresados son: ";
    cout<< persona.getNombre()<<endl;
    cout<< persona.getEdad()<<endl;
    return 0;
}