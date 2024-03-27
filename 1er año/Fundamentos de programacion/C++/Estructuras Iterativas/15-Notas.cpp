/*Permita ingresar 10 notas por teclado, y que determine si está aprobado (4 o más) o no. 
Contabilice la cantidad de aprobados, la cantidad de desaprobados, y el promedio.*/

#include<iostream>
using namespace std;

int main(){
    float nota;
    float suma=0;
    float apr=0;
    float desap=0;
    float prom;
    //Logica ciclo for
    for(int i=1;i<=10;i++){
        cout<<"Ingrese la "<<i<<" nota"<<endl;
         cin>>nota;
         suma=suma+nota;
         if(nota>=4){
            apr++;
         }else{
            desap++;
         }
    }
    //Calculos
    prom=(suma)/10;
    cout<<"Aprobados: "<<apr<<endl;
    cout<<"Desaprobados: "<<desap<<endl;
    cout<<"Promedio: "<<prom<<endl;
    return 0;
}