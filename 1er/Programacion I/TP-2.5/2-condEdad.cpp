/*
Realice un procedimiento Void que permita almacenar los nombres de aquellas
personas que tengan 18, 20 o 22 años de edad. Supongamos que hay un grupo de 6
personas con edades diferentes. El programa debe solicitar los nombres y edades
de cada uno de los integrantes e imprimir una lista con los nombres de aquellos que
cumplan con el requisito de edades mencionado
*/

#include<iostream>
using namespace std;

void personas(string a[], int b[]){
    string c[6];
    int contador=0;
    for(int i=0;i<6;i++){
        if(b[i]==18 ||b[i]==20 || b[i]==22){
            c[contador]=a[i];
            contador++;
        }
    }
    cout<<"las personas que cumplen la condicion son: "<<endl;
    for(int i=0;i<contador;i++){
        cout<<c[i]<<endl;
    }
}

int main(){
    string name[6];
    int age[6], i, longitud;

    for(i=0;i<6;i++){
        cout<<"Ingrese el nombre "<<i+1<<endl;
        cin>>name[i];
    }
    for(i=0;i<6;i++){
        cout<<"Ingrese la edad "<<i+1<<endl;
        cin>>age[i];
    }
personas(name,age);
}