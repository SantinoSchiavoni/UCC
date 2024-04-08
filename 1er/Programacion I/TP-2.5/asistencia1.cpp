/*
10 alumnos.
%apb y %rep
nombre del alumno con la nota mas alta y el nombre del alumno con la nota mas baja
*/

#include<iostream>
using namespace std;

void funcion_alumnos(string a[], float b[]){
    float cant_apb=0, cant_rep=0, prom_apb=0, prom_rep=0, pivot_notaalta=0, pivot_notabaja=10;
    string nombre_alta, nombre_baja;

    for(int i=0;i<10;i++){
        if(b[i]>=4){
            cant_apb++;
        }
        if(b[i]<4){
            cant_rep++;
        }
        if(b[i]>pivot_notaalta){
            pivot_notaalta=b[i];
            nombre_alta=a[i];
        }
        if(b[i]<pivot_notabaja){
            pivot_notabaja=b[i];
            nombre_baja=a[i];
        }
    
    }
    prom_apb=(cant_apb/10)*100;
    prom_rep=(cant_rep/10)*100;

    cout<<"% alumnos aprobados: "<<prom_apb<<" %"<<endl;
    cout<<"% alumnos reprobados: "<<prom_rep<<" %"<<endl;
    cout<<"Nombre alumno nota mas alta: "<<nombre_alta<<endl;
    cout<<"Nombre alumno nota mas baja: "<<nombre_baja<<endl;
}

int main(){
    int i;
    string nombres[10];
    float notas[10];
    for(i=0;i<10;i++){
        cout<<"Ingrese el nombre "<<i+1<<endl;
        cin>>nombres[i];
    }
    for(i=0;i<10;i++){
        cout<<"Ingrese la  nota "<<i+1<<endl;
        cin>>notas[i];
    }
funcion_alumnos(nombres,notas);
return 0;
}