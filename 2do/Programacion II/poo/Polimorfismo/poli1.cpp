#include <iostream>
using namespace std;

// Si no hay herencia, no hay polimorfismo

class persona{
    private: 
        string nombre;
        int edad;
    public:
        persona();
        persona(string, int);
        virtual void mostrar();
        void setNombre(string);
        void setEdad(int);
        string getNombre();
        int getEdad();
    };

class alumno: public persona{
    private:
        string carrera;
    public:
        alumno();
        alumno(string, int, string);
        void mostrar();
        void setCarrera(string);
        string getCarrera();
    };

    persona::persona(){
    }

    persona::persona(string _nombre, int _edad){
        nombre = _nombre;
        edad = _edad;
    }

    void persona::setNombre(string _nombre){
        nombre = _nombre;
    }

    void persona::setEdad(int _edad){
        edad = _edad;
    }

    string persona::getNombre(){
        return nombre;
    }

    int persona::getEdad(){
        return edad;
    }  

    void persona::mostrar(){
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
    }

    alumno::alumno(){
    }

    alumno::alumno(string _nombre, int _edad, string _carrera):persona(_nombre, _edad){
        carrera = _carrera;
    }

    void alumno::setCarrera(string _carrera){
        carrera = _carrera;
    }

    string alumno::getCarrera(){
        return carrera;
    }

    void alumno::mostrar(){
        persona::mostrar();
        cout << "Carrera: " << carrera << endl;
    }

int main(){
    persona *per[2];

    per[0]=new persona("carlos",24);
    per[1]=new alumno("eduardo", 50, "informatica");

    per[0]->mostrar();
    per[1]->mostrar();
}