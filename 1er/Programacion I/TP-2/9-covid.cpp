/*
En una fila de pruebas para COVID-19 hay 14 personas. Elaborar un programa que
permita determinar cuántas personas son mayores de edad, cuántas son menores
de edad y cuál es el promedio general de edades.
*/

#include<iostream>
using namespace std;

int main(){
    float a[14], menores=0,mayores=0,promedio=0,total=0;
    for(int i=0;i<14;i++){
        cout<<"Ingrese las edad de la "<<i+1<<" persona"<<endl;
        cin>>a[i];
    }
    for(int i=0;i<14;i++){
        total+=a[i];
        if(a[i]>=18){
            mayores++;
        }else if(a[i]<18) {
            menores++;
        }
    }
    promedio=total/14;
    cout<<"En la fila hay: "<<endl;
    cout<<"-->Menores: "<<menores<<endl;
    cout<<"-->Mayores: "<<mayores<<endl;
    cout<<"El promedio de edad es: "<<promedio<<endl;
    return 0;
}