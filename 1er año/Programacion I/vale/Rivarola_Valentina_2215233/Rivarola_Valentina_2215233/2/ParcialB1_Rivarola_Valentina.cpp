#include<iostream>
using namespace std;

void cargar(string nombre[30],int dni[30], string sexo[30],string tipo_cliente[30],int monto[30],string tipo_producto[30]){
    int i;
    for (i=0;i<30;i++){
    cout<<"Cliente"<<i+1<<":"<<endl;
    cout<<"Ingrese el tipo de cliente (pensionado, comun o afiliado): ";
    cin>>tipo_cliente[i];
    cout<<"Ingrese el nombre del cliente: ";
    cin>>nombre[i];
    cout<<"Ingrese el sexo del cliente (femenino o masculino): ";
    cin>>sexo[i];
    cout<<"Ingrese el DNI del cliente: ";
    cin>>dni[i];
    cout<<"Ingrese el tipo de producto que compro: ";
    cin>>tipo_producto[i];
    cout<<"Ingrese el monto de compra: ";
    cin>>monto[i];
    cout<< ""<<endl;
    }
}

int carnes(int monto[30],string tipo_producto[30]){
    int contador, i;

    for (i=0;i<30;i++){
        if (tipo_producto[i]== "carne" && monto[i]>5000){
            contador=contador+1;
        }
    }
    return contador;
}

float mujeres(string sexo[30]){
    int contador=0, i;
    float porcentaje;

    for(i=0;i<30;i++){
        if (sexo[i]=="femenino"){
            contador=contador+1;
        }
    }

    porcentaje=contador*100/30;
    return porcentaje;
}

void menos_compro(string sexo[30]){
    int fem=0, mas=0, i;
    string menor;
    for(i=0;i<30;i++){
        if (sexo[i]=="femenino"){
            fem=fem+1;
        } else{
            mas=mas+1;
        }
    }
    if (fem>mas){
    cout << "El sexo del cliente que menos compro son: el masculino."<<endl;

    } else if (mas>fem){
    cout << "El sexo de clientes que menos compro son: el femenino."<<endl;
    }
}

float hombres_afiliados(int monto[30], string sexo[30],string tipo_cliente[30]){
    int contador=0, i;
    float porcentaje;
    for (i=0;i<30;i++){
        if (sexo[i]=="masculino" && monto[i]<1500 && tipo_cliente[i]== "afiliado"){
            contador=contador+1;
        }
    }
    porcentaje=contador*100/30;
    return porcentaje;
}

int mayor_compra (int dni[30], int monto[30]){
    int dni_mayor=0, monto_mayor=0, i;
    for(i=0;i<30;i++){
        if (monto[i]>monto_mayor){
            dni_mayor=dni[i];
            monto_mayor=monto[i];
        }
    }
    return dni_mayor;
}

int main(){

string nombre[30],sexo[30],tipo_cliente[30],tipo_producto[30];
int dni[30],monto[30];

cargar(nombre,dni,sexo,tipo_cliente,monto,tipo_producto);

cout<<"La cantidad de clientes que gastaron mas de $5000 en carnes es: "<<carnes(monto,tipo_producto)<<endl;
cout<<"El porcentaje de clientes mujeres es: "<<mujeres(sexo)<<endl;

menos_compro(sexo);

cout<<"El DNI del cliente que hizo la mayor compra es: "<<mayor_compra(dni,monto)<<endl;
cout<<"El porcentaje de clientes hombres afiliados que compraron menos de 1500 es: "<<hombres_afiliados(monto,sexo,tipo_cliente)<<endl;
}
