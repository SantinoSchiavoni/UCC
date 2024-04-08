#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

struct menu{

    char carne [15];
    char guarnicion [15];
    float peso;
    int precio;
};

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
        cout<<"Ingrese el tipo de carne: "<<endl;
        cin.ignore();
        cin.getline(A[i].carne,15,'\n');
        cout<<"Ingrese el tipo de guarnicion: "<<endl;
        cin.ignore();
        cin.getline(A[i].guarnicion,15,'\n');
        cout<<"Ingrese peso del plato (kg): "<<endl;
        cin>>A[i].peso;
        cin.ignore();
        cout<<"Ingrese el precio del plato: "<<endl;
        cin>>A[i].precio;
        cin.ignore();
    }
}

void pollo (menu A[], int n){
    int cant=0;

    for (int i = 0; i < n; i++)
    {
        if(strcmp(A[i].carne,"pollo")==0){
            cant++;
        }
    }
    cout<<"Cantidad de platos con pollo que se sirvieron: "<<cant<<endl;
}

void noensalda (menu A[],int n){
    float total = 0, recaudacion=0;
    int platos = 0;

    for (int i = 0; i < n; i++)
    {
        if(strcmp(A[i].guarnicion,"ensalada")!=0){
            total+=A[i].precio;
            platos++;
        }
    }
    
    recaudacion=total/platos;
    cout<<"Promedio recaudado por los platos que no tenian ensalada: "<<recaudacion<<endl;

}

void platos (menu A[], int n){
    float peso=0;

    for (int i = 0; i < n; i++)
    {
        peso+=A[i].peso;
    }

    if(n>=20){
        cout<<"Peso total que sumaron los primeros 20 platos: "<<peso<<"kg"<<endl;
    }else if(n<19){
        cout<<"La cantidad de platos es menor de 20. Son "<<n<<" platos y el peso total es: "<<peso<<"kg"<<endl;

    }
    
}

void sinpollo(menu A[], int n){
    int total=0;

    for (int i = 0; i < n; i++)
    {
        if(strcmp(A[i].carne,"pollo")!=0){
            total+=A[i].precio;
        }
    }
    cout<<"Total recaudado por los platos sin pollo: "<<total<<endl;
}

void arroz (menu A[], int n){
    float totalarroz=0, porcentaje=0, total=0;

    for (int i = 0; i < n; i++)
    {
        total+=A[i].precio;
        if(strcmp(A[i].guarnicion,"arroz")==0){
            totalarroz+=A[i].precio;
        }
    }

    if (total != 0) {
        porcentaje = (totalarroz * 100) / total;
        cout << "El porcentaje recaudado por los platos con arroz: " << porcentaje << "%" <<endl;
    } else {
        cout << "No se puede calcular el porcentaje, el total es cero." <<endl;
    }
}

int main(){

    int n;
    menu A[100];
    cout<<"Ingrese el numero de clientes: "<<endl;
    cin>>n;
    ingresar(A,n);
    pollo(A,n);
    noensalda(A,n);
    platos(A,n);
    sinpollo(A,n);
    arroz(A,n);


}

