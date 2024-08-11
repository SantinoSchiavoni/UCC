/*
Se conoce de un alumno: clave UCC, nombre y tres notas parciales (nota1, nota2, nota3)
Se desea saber su nota final(prom de las notas de parciales). El programa debe imprimir:
clave ucc, nombre, nota final y si aprobó o no (nota final >= 4) o no aprobo (nota final < 4) 
la asignatura
*/
#include <iostream>
using namespace std;

class alumno{
    private:
        int clave;
        string nombre;
        float nota1, nota2, nota3;
    public:
    alumno(int c, string n, float n1, float n2, float n3);
    void notaFinal();
};

alumno::alumno(int c, string n, float n1, float n2, float n3){
    clave = c;
    nombre = n;
    nota1 = n1;
    nota2 = n2;
    nota3 = n3;
}


void alumno::notaFinal(){
    cout << "Clave UCC: " << clave << endl;
    cout << "Nombre: " << nombre << endl;
    float promedio = (nota1 + nota2 + nota3) / 3;
    cout << "Nota final: " << promedio << endl;
    if(promedio >= 4){
        cout << "Aprobado" << endl;
    }else{
        cout << "No aprobado" << endl;
    }
}

int main(){
    int c;
    string n;
    float n1, n2, n3;
    cout << "Ingrese la clave UCC: ";
    cin >> c;
    cout << "Ingrese el nombre del alumno: ";
    cin >> n;
    cout << "Ingrese la nota 1: ";
    cin >> n1;
    cout << "Ingrese la nota 2: ";
    cin >> n2;
    cout << "Ingrese la nota 3: ";
    cin >> n3;
    alumno a(c, n, n1, n2, n3);
    a.notaFinal();
}
