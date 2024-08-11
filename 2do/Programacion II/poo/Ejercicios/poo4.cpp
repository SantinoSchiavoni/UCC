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

class estudiante : public persona{
    private:
        string claveucc;
        float notafinal;
    public:
        estudiante(string,int,string,float);
        void mostrarestudiante();
};

persona::persona(string x, int y){
    nombre = x;
    edad = y;
};

void persona::mostrarpersona(){
    cout << "Nombre: " << nombre << endl;       
    cout << "Edad: " << edad << endl;
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

int main(){
    persona p1("Juan", 21);
    estudiante e1("Pedro", 22, "123456", 8.74);

    cout << "Datos de la persona: " << endl;
    p1.mostrarpersona();
    cout << endl;
    cout << "Datos del estudiante: " << endl;
    e1.mostrarestudiante();

}