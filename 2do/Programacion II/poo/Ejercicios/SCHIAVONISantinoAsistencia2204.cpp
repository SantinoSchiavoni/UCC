/*
Relice un programa de tal manera que se construya una solucion para la jerarquia
(herencia) de las siguientes clases:
Clase Base: Persona (nombre, edad)
Clase Derivada: Empleado (sueldo)
Clase Derivada: Estudiante (claveucc, notafinal)
Clase Derivada de Estudiante: Universitario (carrera)
*/

#include <iostream>
using namespace std;

class persona{
    private:
    string nombre;
    int edad;
    public:
    persona(string,int);
    void mostrarpersona();
};

class empleado : public persona{
    private:
    float sueldo;
    public:
    empleado(string,int,float);
    void mostrarempleado();
};

class estudiante : public persona{
    private:
    string claveucc;
    float notafinal;
    public:
    estudiante(string,int,string,float);
    void mostrarestudiante();
};

class universitario : public estudiante{
    private:
    string carrera;
    public:
    universitario(string,int,string,float,string);
    void mostraruniversitario();
};

persona::persona(string x, int y){
    nombre = x;
    edad = y;
};

void persona::mostrarpersona(){
    cout << "Nombre: " << nombre << endl;       
    cout << "Edad: " << edad << endl;
}

empleado::empleado(string x, int y, float z) : persona(x, y){
    sueldo = z;
};

void empleado::mostrarempleado(){
    mostrarpersona();
    cout << "Sueldo: " << sueldo << endl;
}

estudiante::estudiante(string x, int y, string x2, float y2) : persona(x, y){
    claveucc = x2;
    notafinal = y2;
};

void estudiante::mostrarestudiante(){
    mostrarpersona();
    cout << "Clave UCC: " << claveucc << endl;
    cout << "Nota Final: " << notafinal << endl;
}

universitario::universitario(string x, int y, string x2, float y2, string x3) : estudiante(x, y, x2, y2){
    carrera = x3;
};

void universitario::mostraruniversitario(){
    mostrarestudiante();
    cout << "Carrera: " << carrera << endl;
}

int main(){
    persona p1("Juan", 21);
    empleado e1("Pedro", 22, 1000);
    estudiante e2("Maria", 23, "123456", 6.97);
    universitario u1("Luis", 24, "654321", 9.21, "Ingenieria de Sistemas");

    cout << "Datos de la persona: " << endl;
    p1.mostrarpersona();
    cout << endl;
    cout << "Datos del empleado: " << endl;
    e1.mostrarempleado();
    cout << endl;
    cout << "Datos del estudiante: " << endl;
    e2.mostrarestudiante();
    cout << endl;
    cout << "Datos del universitario: " << endl;
    u1.mostraruniversitario();
}

