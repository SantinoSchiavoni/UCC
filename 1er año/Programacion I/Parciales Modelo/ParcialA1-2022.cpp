#include <iostream>
using namespace std;

void cargar(int ag[3], int rg[3]){
    cout<<"Ingrese los resultados"<<endl;
    for(int i=0;i<3;i++){
        cout<<"Ingrese los goles de Argentina en el partido "<<i+1<<endl;
        cin>>ag[i];
        if(i==0){
        cout<<"Ingrese los goles de Arabia Saudita"<<endl;
        cin>>rg[i];   
        }
        if(i==1){
        cout<<"Ingrese los goles de Mexico"<<endl;
        cin>>rg[i];   
        }
        if(i==2){
        cout<<"Ingrese los goles de Polonia"<<endl;
        cin>>rg[i];   
        }
    }
}

int puntos(int ag[3], int rg[3]){
    int puntos=0;
    for(int i=0;i<3;i++){
        if(ag[i]>rg[i]){
            puntos+=3;
        }
        else if(ag[i]==rg[i]){
            puntos+=1;
        }
    }
    return puntos;
}

int rivales(int ag[3], int rg[3]){
    int cont_rival=0;
    for(int i=0;i<3;i++){
        if(ag[i]>2){
            cont_rival++;
        }
    }
    return cont_rival;
}

void perdio(int ag[3], int rg[3]){
    if(ag[0]<rg[0]){
        cout<<"Perdio contra Arabia Saudita"<<endl;
    }
    if(ag[1]<rg[1]){
        cout<<"Perdio contra Mexico"<<endl;
    }
    if(ag[2]<rg[2]){
        cout<<"Perdio contra Polonia"<<endl;
    }
}

int goles_recibidos(int ag[3], int rg[3]){
    int cont_goles=0;
    for(int i=0;i<3;i++){
        cont_goles+=rg[i];
    }
    return cont_goles;
}



int main(){
    int ag[3],rg[3];
    cargar(ag,rg);
    cout<<"Argentina hizo: "<<puntos(ag,rg)<<" puntos"<<endl;
    cout<<"Rivales a los que se les marco mas de 2 goles: "<<rivales(ag,rg)<<endl;
    perdio(ag,rg);
    cout<<"Goles recibidos: "<<goles_recibidos(ag,rg)<<endl;
}