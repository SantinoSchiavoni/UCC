/*
Elabore un programa que lea una matriz cuadrada 4x4 
y 4 vectores y verifique si el contenido de dicha matriz 
está conformada por el contenido de los 4 vectores
Utilice una funcion booleana
*/

#include <iostream>
using namespace std;

bool comprobacion(string m[4][4], string v1[4], string v2[4], string v3[4], string v4[4]){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i==0){
                if(m[i][j]!=v1[i]){
                    return false;
                }
            }
            if(i==1){
                if(m[i][j]!=v2[i]){
                    return false;
                }
            }
            if(i==2){
                if(m[i][j]!=v3[i]){
                    return false;
                }
            }
            if(i==3){
                if(m[i][j]!=v4[i]){
                    return false;
                }
            }
        }
    }return true;
}

int main(){
    string matriz[4][4];
    string v1[4], v2[4], v3[4], v4[4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<"Matriz: Ingrese el valor "<<i+1<<" , "<<j+1<<endl;
            cin>>matriz[i][j];
        }
    }
    for(int i=0;i<4;i++){
    cout<<"Ingrese elemento "<<i+1<<" del vector 1"<<endl;
    cin>>v1[i];
    }
    for(int i=0;i<4;i++){
    cout<<"Ingrese elemento "<<i+1<<" del vector 2"<<endl;
    cin>>v2[i];
    }
    for(int i=0;i<4;i++){
    cout<<"Ingrese elemento "<<i+1<<" del vector 3"<<endl;
    cin>>v3[i];
    }
    for(int i=0;i<4;i++){
    cout<<"Ingrese elemento "<<i+1<<" del vector 4"<<endl;
    cin>>v4[i];
    }
    if(comprobacion(matriz,v1,v2,v3,v4)){
        cout<<"Es el mismo contenido"<<endl;
    }else{
        cout<<"No es el mismo contenido"<<endl;
    }
    return 0;
}