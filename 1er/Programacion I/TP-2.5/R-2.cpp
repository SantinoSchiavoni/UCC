/*
Un examen de tipo falso/verdadero consta de 20 preguntas. 
Las respuestas correctas para dicho examen se almacenan en un vector entero de 20 posiciones. 
Cada posición del vector representa una pregunta y el valor contenido en cada posición representa la respuesta correcta. 
Si el valor es 1 la respuesta correcta es verdadero, si es 0 la respuesta correcta es falso.
Se dispone a su vez de un segundo arreglo con las respuestas ingresadas para esas preguntas por un alumno.
Obtener un programa que permita ingresar el arreglo con las respuestas correctas y el arreglo con las respuestas del alumno 
y obtenga lo siguiente:
 El puntaje obtenido por el estudiante si cada pregunta vale 5 puntos.
 La cantidad de respuestas correctas.
 La cantidad de respuestas incorrectas
*/

#include <iostream>
using namespace std;



void cargar(bool a[20], bool c[20]){
    cout<<"Ingrese las respuestas del alumno"<<endl;
    for(int i=0;i<20;i++){
        cin>>a[i];
    }
    cout<<"Ingrese las respuestas correctas"<<endl;
    for(int i=0;i<20;i++){
        cin>>c[i];
    }
}

int puntaje(bool a[20], bool c[20]){
    int puntaje=0;
    for(int i=0;i<20;i++){
        if(a[i]==c[i]){
            puntaje+=5;
        }
    }
    return puntaje;
}

int rta_correctas(bool a[20], bool c[20]){
    int correctas=0;
    for(int i=0;i<20;i++){
        if(a[i]==c[i]){
            correctas++;
        }
    }
    return correctas;
}

int incorrectas(bool a[20], bool c[20]){
    int incorrectas=0;
    for(int i=0;i<20;i++){
        if(a[i]!=c[i]){
            incorrectas++;
        }
    }
    return incorrectas;
}

int main(){
    bool a[20], c[20];
    cargar(a,c);
    cout<<"El puntaje obtenido por el alumno es: "<<puntaje(a,c)<<endl;
    cout<<"La cantidad de respuestas correctas es: "<<rta_correctas(a,c)<<endl;
    cout<<"La cantidad de respuestas incorrectas es: "<<incorrectas(a,c)<<endl;


}