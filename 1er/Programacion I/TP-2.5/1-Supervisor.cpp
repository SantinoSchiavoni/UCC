/*
José es responsable de supervisar a cinco empleados en un supermercado, de los
cuales conoce sus nombres y sus respectivos códigos de personal (se deben
ingresar). Desarrollar un programa que utilice una función para buscar y devolver el
nombre de la persona correspondiente al código ingresado. En caso de ingresar un
código inválido, el programa debe ser capaz de avisar que no hay empleados
registrados con ese código
*/

#include<iostream>
using namespace std;

string buscar(string x[], int y[], int codi){
    int posicion;
    bool bandera=0;
    string result_inv = "NO EXISTE";
    
    /*
    for(int i=0;i<5;i++){
            if(y[i]==codi){
                posicion=i;
                bandera=1;
            }
        }
    if(bandera==1){
        return x[posicion];
    }
    else{
        return result_inv;
    }
    */
     for(int i=0;i<5;i++){
            if(y[i]==codi){
                posicion=i;
                return x[posicion];
            }
        }
    return "NO EXISTE";  
}

int main(){
    int cod[5],codigo;
    string name[5]; 

    for(int i=0;i<5;i++){
        cout<<"Ingrese el nombre del empleado "<<i+1<<endl;
        cin>>name[i];
        cout<<"Ingrese el codigo del empleado "<<i+1<<endl;
        cin>>cod[i];
    }
    cout<<"Ingrese el codigo a buscar"<<endl;
    cin>>codigo;

    cout<<"El nombre con el codigo "<<codigo<<" es: "<<buscar(name,cod,codigo)<<endl;
    return 0;
}