/*Desarrolle un programa que reciba como parámetro una medida de tiempo en horas,
minutos y segundos; y lo transforme en una expresión correcta. Luego imprimir el
tiempo con la expresión correcta.*/

#include<iostream>
using namespace std;

int tiempo(int hs, int min, int seg){
    int min2, horas2;
    min2 = seg/60;
    seg = seg % 60;
    min = min + min2;
    horas2 = min/60;
    min = min %60;
    hs = hs + horas2;

cout<<hs<<" [hs] "<<min<<" [min] "<<seg<<" [seg] "<<endl;

}

int main(){
    int horas, minutos, segundos;

    cout<<"Ingrese horas, minutos y segundos"<<endl;
    cin>>horas;
    cin>>minutos;
    cin>>segundos;

    cout<<tiempo(horas,minutos,segundos)<<endl;
    return 0;

}