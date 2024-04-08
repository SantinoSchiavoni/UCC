#include<iostream>
using namespace std;


void cargar(int golesarg[3], int golesrival[3]){
    for (int i=0;i<3;i++){
        cout << "PARIDO CONTRA ";
        if (i==0){
            cout << "POLONIA"<<endl;
        } else if (i==1){
            cout << "MEXICO"<<endl;
        } else if (i==2){
            cout << "ARABIA SAUDITA"<<endl;
        }
        cout << "cargue los goles de ARGENTINA: ";
        cin >>golesarg[i];
        cout << "cargue los goles del RIVAL: ";
        cin >>golesrival[i];
        cout<< ""<<endl;
    }
}

int puntos (int golesarg[3], int golesrival[3]){
    int acum=0;
    for (int i=0;i<3;i++){
        if (golesarg[i]>golesrival[i]){
            acum=acum+3;
        } else if (golesarg[i]==golesrival[i]){
            acum=acum+1;
        }
    }
    return acum;
}

int main(){
    int golesarg[3],golesrival[3],cont=0,acumgoles=0;
    cargar(golesarg,golesrival);
    puntos(golesarg,golesrival);
    cout<< "argentina consiguio "<< puntos(golesarg,golesrival) << " puntos"<<endl;
    for (int i=0;i<3;i++){
        if (golesarg[i]>2){
            cont=cont+1;
        }
    }
    cout<< "argentina le marco mas de 2 goles a "<<cont<< " selecciones"<<endl;
    if (golesarg[0]<golesrival[0]){
        cout << "perdio contra POLONIA"<<endl;
    } else if (golesarg[1]<golesrival[1]){
        cout << "perdio contra MEXICO"<<endl;
    } else if (golesarg[2]<golesrival[2]){
        cout << "perdio contra ARABIA SAUDITA"<<endl;
    }
    for (int i=0;i<3;i++){
        acumgoles=acumgoles+golesrival[i];
    }
    cout << "argentina recibio "<<acumgoles<< " goles en total por parte de los rivales"<<endl;
