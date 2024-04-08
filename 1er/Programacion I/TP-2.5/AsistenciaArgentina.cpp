/*
durante las eliminatorias mundialistas a Qatar 2022 argentina disputara 
18 partidos, contra 9 países  de los cuales se necesita llevar el control y sacar determinadas estadísticas.

La AFA lo contrata a Ud. para que realice un programa en Java que registre los datos y responda varias interrogantes
Los datos que se tienen en cuenta son: goles a favor, goles en contra, rival enfrentado, 
igual es importante saber que si el partido se ganó se le asignan 3 puntos en tabla, si fue empate solo 1.
Elabore una estructura que le permita llevar el control de los puntos obtenidos a lo largo de las eliminatorias y determine.
a)	Numero de Rivales con los que se perdió
b)	Numero de Rivales a los que se les gano 
c)	Dado el nombre de un rival hacer un procedimiento que muestre por pantalla como quedaron los juegos jugados contra el.
d)	Puntos obtenidos al final de las eliminatorias.
*/

#include <iostream>
using namespace std;

void funcion(int Ag[18], int Rg[18]){
    string pais, paises[18]={"Bolivia","Brasil","Chile","Colombia","Ecuador","Paraguay","Peru","Uruguay","Venezuela","Bolivia","Brasil","Chile","Colombia","Ecuador","Paraguay","Peru","Uruguay","Venezuela"};
    int cont_gan=0, cont_perd=0, puntos=0;
        for(int i=0;i<9;i++){
            if(Rg[i]>Ag[i] || Rg[i+9]>Ag[i+9]){
                cont_perd++;
            }
            else if(Rg[i]<Ag[i] || Rg[i+9]<Ag[i+9]){
                cont_gan++;
            } 
        }
        for(int i=0;i<18;i++){
                if(Ag[i]>Rg[i]){
                puntos+=3;
            }
            if(Ag[i]==Rg[i]){
                puntos+=1;
            }
        }
    cout<<"Numero de rivales a los que se les perdio: "<<cont_perd<<endl;
    cout<<"Numero de rivales a los que se les gano: "<<cont_gan<<endl;
    cout<<"-->Ingrese el nombre de un rival: "<<endl;
    cin>>pais;
        for(int i=0;i<9;i++){
            if(paises[i]==pais){
                cout<<"los resultados contra "<<pais<<endl;
                cout<<"Partido 1: "<<Ag[i]<<" - "<<Rg[i]<<endl;
                cout<<"Partido 2: "<<Ag[i+9]<<" - "<<Rg[i+9]<<endl;
            }
        }
    cout<<"Argentina obtuvo: "<<puntos<<" puntos"<<endl;
}  

int main(){
    int Ag[18], Rg[18];
    string paises[18]={"Bolivia V","Brasil L","Chile V","Colombia L","Ecuador V","Paraguay L","Peru V","Uruguay L","Venezuela V","Bolivia L","Brasil V","Chile L","Colombia V","Ecuador L","Paraguay V","Peru L","Uruguay V","Venezuela L"};
    for (int i=0;i<18;i++){
        cout << "Introduzca los goles de Argentina en el partido "<<i+1<<" , contra: "<<paises[i]<<endl;
        cin >>Ag[i];
        cout << "Introduzca los goles del Rival en el partido "<<i+1<<": "<<endl;
        cin >>Rg[i];

    }
    funcion(Ag,Rg);
}