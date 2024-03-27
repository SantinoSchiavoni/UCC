/*
Un examen true/false consta de 10 preguntas, y las respuestas correctas se
almacenan en un vector de tipo entero. Se dispone de un segundo arreglo con las
respuestas ingresadas por el alumno.
Desarrolle un programa que permita ingresar ambos arreglos y retorne:
○ El puntaje obtenido por el estudiante si cada pregunta vale 5 puntos.
○ La cantidad de respuestas correctas.
○ La cantidad de respuestas incorrectas.
*/

#include <iostream>
using namespace std;

void examen(bool rtasCorrectas[], bool rtasAlumno[]){
    int puntaje=0;
    int correctas=0;
    int incorrectas=0;
    for(int i=0;i<10;i++){
        if(rtasCorrectas[i]==rtasAlumno[i]){
            puntaje+=5;
            correctas++;
        }else{
            incorrectas++;
        }
    }
    cout << "El puntaje obtenido por el estudiante es: " << puntaje << endl;
    cout << "La cantidad de respuestas correctas es: " << correctas << endl;
    cout << "La cantidad de respuestas incorrectas es: " << incorrectas << endl;
}

int main(){
    bool rtasCorrectas[10];
    bool rtasAlumno[10];

    for(int i=0;i<10;i++){
        cout << "Ingrese la respuesta correcta de la pregunta " << i+1 << ": ";
        cin >> rtasCorrectas[i];
    }
    for(int i=0;i<10;i++){
        cout << "Ingrese la respuesta del alumno de la pregunta " << i+1 << ": ";
        cin >> rtasAlumno[i];
    }
    cout<<""<<endl;
    examen(rtasCorrectas, rtasAlumno);
    return 0;
}