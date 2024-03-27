#include<iostream>
using namespace std;


void cargar(int Ag[3], int Rg[3]){
    for (int i=0;i<3;i++){
        cout << "Partido contra ";
        if (i==0){
            cout << "Polonia"<<endl;
        } else if (i==1){
            cout << "Mexico"<<endl;
        } else if (i==2){
            cout << "Arabia Saudita"<<endl;
        }
        cout << "Introduzca los goles de Argentina: ";
        cin >>Ag[i];
        cout << "Introduzca los goles del Rival: ";
        cin >>Rg[i];
        cout<< "" <<endl;
    }
}

int puntos (int Ag[3], int Rg [3]){
    int acumulador=0;
    for (int i=0;i<3;i++){
        if (Ag[i]>Rg[i]){
            acumulador=acumulador+3;
        } else if (Ag[i]==Rg[i]){
            acumulador=acumulador+1;
        }
    }
    return acumulador;
}

int main(){
    int Ag[3],Rg[3],contador=0,acumgoles=0;
    cargar(Ag,Rg);
    cout<< "Argentina consiguio "<< puntos(Ag,Rg) << " puntos"<<endl;

    for (int i=0;i<3;i++){
        if (Ag[i]>2){
            contador=contador+1;
        }
    }
    cout<< "Argentina le hizo mas de 2 goles a "<<contador<< " selecciones"<<endl;
    if (Ag[0]<Rg[0]){
        cout << "Perdio contra Polonia"<<endl;
    } else if (Ag[1]<Rg[1]){
        cout << "Perdio contra Mexico"<<endl;
    } else if (Ag[2]<Rg[2]){
        cout << "Perdio contra Arabia Saudita"<<endl;
    }
    for (int i=0;i<3;i++){
        acumgoles=acumgoles+Rg[i];
    }
    cout << "Argentina recibio "<<acumgoles<< " goles en total por parte de los rivales"<<endl;
    }
