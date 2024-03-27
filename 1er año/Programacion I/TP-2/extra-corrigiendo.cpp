/*
Aporte:
La primera línea va a ser un entero que va a ser la cantidad de alumnos en el curso. Luego,
se ingresarán las n notas de los alumnos.
Producción:
Se debe imprimir lo siguiente: En la primera línea, la cantidad y promedio de aprobados. En
la segunda línea, la cantidad y promedio de reprobados. En la tercera línea, el promedio
general del curso. En la cuarta línea, la nota más alta.
Aclaración:
Las correcciones van con notas del 1 al 10 inclusive, y se considera que un alumno está
aprobado cuando obtiene una nota mayor o igual a 4.
*/

#include<iostream>
using namespace std;

int main(){
    float cant_alumnos=0, notas[100], cant_apb=0, prom_apb=0, cant_rep=0, prom_rep=0,promedio=0,nota_alta=0;

    cout<<"Ingrese la cantidad de alumnos"<<endl;
    cin>>cant_alumnos;
    for(int i=0;i<cant_alumnos;i++){
        cout<<"Ingrese la nota del "<<i+1<<" alumno: "<<endl;
        cin>>notas[i];
    } 
    for(int i=0;i<cant_alumnos;i++){
        promedio=promedio+notas[i];
        if(notas[i]>=4){
            cant_apb++;
            prom_apb=prom_apb+notas[i];
            if(notas[i]>nota_alta){
                nota_alta=notas[i];
            }
        }
        if(notas[i]<4){
            cant_rep++;
            prom_rep=prom_rep+notas[i];
        }
    }
    promedio=promedio/cant_alumnos;
    prom_apb=prom_apb/cant_apb;
    prom_rep=prom_rep/cant_rep;
    
    cout<<"La cantidad de aprobados es: "<<cant_apb<<" , y su promedio es: "<<prom_apb<<endl;
    cout<<"La cantidad de reprobados es: "<<cant_rep<<" , y su promedio es: "<<prom_rep<<endl;
    cout<<"El promedio total es: "<<promedio<<endl;
    cout<<"La nota mas alta es: "<<nota_alta<<endl;
    return 0;
}