/*
Se  pide  crear  un  programa  que  pida  una  serie  de  números  al  usuario  y  halle  el 
máximo,  el  mínimo  y  la  media  aritmética  de  ellos.  Para  ello  se  debe  crear  una
variable puntero tipo float, pedir al usuario que introduzca el número de datos, y 
sucesivamente  los  datos  a  cargar  en  el  arreglo.  Recordar  que  se  debe  reservar 
memoria de forma dinámica. 
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    float max, min, media;
    float suma = 0;
    float *p_min, *p_max, *p_media;

    p_max = &max;
    p_min = &min;
    p_media = &media;


    float *a = new float[n]; //reserva de memoria dinamica

    cout<<"Ingrese la cantidad de elementos: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Elemento "<< i+1 <<endl;
        cin>>a[i];
        suma+=a[i];
    }

    max = a[0];
    min = a[0];

    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    
    for(int i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    media = suma/n;

    cout<<"Maximo: "<<*p_max<<endl;
    cout<<"Minimo: "<<*p_min<<endl;
    cout<<"Media: "<<*p_media<<endl;

    delete[] a; //liberar memoria
    delete p_max;
    delete p_min;
    delete p_media;
}