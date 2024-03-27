#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

struct menu{

    char carne [15];
    char guarnicion [15];
    float peso;
    int precio;
    int eleccion;
};

void cargarPlatos(menu A[]){
menu menu1 = {"cochino", "arroz", 1.5, 300};
menu menu2 = {"cochino", "fideos", 1.3, 340};
menu menu3 = {"pollo", "ensalada", 1.1, 240};
menu menu4 = {"pescado", "ensalada", 1.4, 280};
}

void menu1(){
    cout<<"---------------------------------------"<<endl;
    cout<<"MENU 1"<<endl;
    cout<<"Tipo de carne: cochino"<<endl;
    cout<<"Tipo de guarnicion: arroz"<<endl;
    cout<<"Peso del plato: 1.5kg"<<endl;
    cout<<"Precio: 300 pesos"<<endl;
}
void menu2(){
    cout<<"---------------------------------------"<<endl;
    cout<<"MENU 2"<<endl;
    cout<<"Tipo de carne: cochino"<<endl;
    cout<<"Tipo de guarnicion: fideos"<<endl;
    cout<<"Peso del plato: 1.3kg"<<endl;
    cout<<"Precio: 340 pesos"<<endl;
}
void menu3(){
    cout<<"---------------------------------------"<<endl;
    cout<<"MENU 3"<<endl;
    cout<<"Tipo de carne: pollo"<<endl;
    cout<<"Tipo de guarnicion: ensalada"<<endl;
    cout<<"Peso del plato: 1.1kg"<<endl;
    cout<<"Precio: 240 pesos"<<endl;
}
void menu4(){
    cout<<"---------------------------------------"<<endl;
    cout<<"MENU 4"<<endl;
    cout<<"Tipo de carne: pescado"<<endl;
    cout<<"Tipo de guarnicion: ensalada"<<endl;
    cout<<"Peso del plato: 1.4kg"<<endl;
    cout<<"Precio: 280 pesos"<<endl;
}

void ingresar(menu A[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<"---------------------------------------"<<endl;
        cout<<"Elija un menu: "<<endl;
        menu1();
        menu2();
        menu3();
        menu4();
        cout<<"Ingrese que menu desea consumir(1,2,3 o 4)"<<endl;
        cin>>A[i].eleccion;

    }

}

int puntoa(menu A[], int n){
    int cont = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i].eleccion == 3)
        {
            cont++;
        }
        
    }
    return cont;
}

float puntob(menu A[], int n){
    float prom = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i].eleccion != 3 || A[i].eleccion != 4) 
        {
            prom = prom + A[i].precio;
        }
        
    }
    return prom;
}



int main(){

    int n;
    menu A[100];
    cout<<"Ingrese el numero de clientes: "<<endl;
    cin>>n;
    cargarPlatos(A);
    ingresar(A,n);
    cout<<"Cantidad de platos con pollo"<<puntoa(A,n)<<endl;
    cout<<"Promedio de precio de los platos que no tenian ensalada"<<puntob(A,n)<<endl;

}