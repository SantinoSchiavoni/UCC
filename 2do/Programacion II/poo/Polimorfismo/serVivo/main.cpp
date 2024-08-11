/*
Crear un programa en c++ que tenga la siguiente jerarquia de clases:
ser_vivo(edad), humano(nombre), perro(raza), hacer polimorfismo implementando
el metodo comer();
*/

#include <iostream>
using namespace std;

class SerVivo{
    private:
        int edad;
    public:
        SerVivo();
        SerVivo(int);

        void setEdad(int);
        int getEdad();

        virtual void comer();
};

class Humano: public SerVivo{
    private:
        string nombre;
    public:
        Humano();
        Humano(int, string);

        void setNombre(string);
        string getNombre();

        void comer();
};

class Perro: public SerVivo{
    private:
        string raza;
    public:
        Perro();
        Perro(int, string);

        void setRaza(string);
        string getRaza();

        void comer();
};

SerVivo::SerVivo(){
}

SerVivo::SerVivo(int _edad){
    edad = _edad;
}

void SerVivo::setEdad(int _edad){
    edad = _edad;
}

int SerVivo::getEdad(){
    return edad;
}

void SerVivo::comer(){
    cout<<"Edad: "<<edad<<endl;
    cout << "Comiendo como un ser vivo" << endl;
}

Humano::Humano(){
}

Humano::Humano(int _edad, string _nombre):SerVivo(_edad){
    nombre = _nombre;
}

void Humano::setNombre(string _nombre){
    nombre = _nombre;
}

string Humano::getNombre(){
    return nombre;
}

void Humano::comer(){
    SerVivo::comer();
    cout << "Nombre: " << nombre << endl;
    cout << "Comiendo como un humano" << endl;
}

Perro::Perro(){
}

Perro::Perro(int _edad, string _raza):SerVivo(_edad){
    raza = _raza;
}

void Perro::setRaza(string _raza){
    raza = _raza;
}

string Perro::getRaza(){
    return raza;
}

void Perro::comer(){
    SerVivo::comer();
    cout << "Raza: " << raza << endl;
    cout << "Comiendo como un perro" << endl;
}

int main(){
    SerVivo *sv[2];
    sv[0] = new Humano(20, "Juan");
    sv[1] = new Perro(5, "Pastor Aleman");

    sv[0]->comer();
    cout<<endl;
    sv[1]->comer();
}