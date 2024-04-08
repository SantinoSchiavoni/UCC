/*
Las notas de un conjunto de N alumnos se almacenan en un arreglo unidimensional
como valores entre 0 y 10. Desarrolle un programa que solicite la cantidad de
alumnos y la nota de cada uno, y determine la cantidad de estudiantes en cada
categoría según sus notas:
○ Deficientes 0-3
○ Regulares 4-5
○ Buenos 6-8
○ Excelentes 9-10
*/

#include<iostream>
using namespace std;

int main(){
    int a[100], cant_alumnos,nota;
    int deficiente=0, regular = 0, bueno = 0, excelente=0;

    cout<<"Ingrese la cantidad de alumnos"<<endl;
    cin>>cant_alumnos;

    for(int i=0;i<cant_alumnos;i++){
    cout<<"Ingrese la nota del alumno: "<<(i+1)<<endl;
    cin>>nota;
    a[i]=nota;
    if(a[i]<=3){
        deficiente++;
    }
        if(a[i]>=4 && a[i]<=5){
        regular++;
    }
        if(a[i]>=6 && a[i]<=8){
        bueno++;
    }
        if(a[i]>=9 && a[i]<=10){
        excelente++;
    }
    }
    cout<<"Deficientes: "<<deficiente<<endl;
    cout<<"regular: "<<regular<<endl;
    cout<<"bueno: "<<bueno<<endl;
    cout<<"excelente: "<<excelente<<endl;
    return 0;
}