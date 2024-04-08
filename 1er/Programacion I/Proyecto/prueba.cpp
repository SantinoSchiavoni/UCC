/*
Con la fiebre del mundial de Qatar2022, muchos
fanáticos han querido recrear sus propios
torneos, tanto física como digitalmente. Es por
ello que a una empresa de software se le
ocurrió la idea de desarrollar un juego que
permita “simular” un pequeño torneo con al
menos 8 equipos participantes.
las características del juego serán las
siguientes:

1- el juego debe permitir leer el nombre de los 8 equipos participantes
2- la modalidad del torneo es: “todos contra todos”
3- cada equipo, juega una única vez en contra de otro.
4- todos los goles de los partidos son asignados de forma “aleatoria” a cada equipo
5-los posibles puntajes de los resultados son: si el equipo gana obtiene 5pts, si
empata 2 y si pierde 0
6- La simulación puede desarrollarse de 2 maneras: a) que el usuario vaya viendo
resultados juego a juego. b) que el sistema haga todas las simulaciones y solo muestre
resultados finales de todos los partidos.
adicionalmente el juego debe arrojar las siguientes estadísticas:
1- crear un archivo “Ganadores4.txt” con el nombre de los equipos que ganaron más
de 4 partidos.
2- crear un archivo “Perdedores4.txt” con el nombre de los equipos que perdieron más
de 4 partidos.
3- crear un archivo “empates.txt” con los equipos que empataron en determinado
partido y mostrar el número de goles con el cual empataron.
4- crear un archivo “superganadores.txt” de aquellos equipos que ganaron por más de
5 goles de diferencia. mostrando el partido y el rival.
5- crear un archivo “superperdedores.txt” de aquellos equipos que perdieron por más
de 6 goles de diferencia. mostrando el partido y el rival.
6- generar un archivo “tabla.txt” que contenga los equipos ordenados
descendentemente por la cantidad de puntos obtenidos en el torneo., y que muestre
la cantidad de partidos ganados, empatados y perdidos de cada equipo.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

//funciones
struct equipos
{
    char nombre[20];
    int puntos;
    int partidos_ganados;
    int partidos_empatados;
    int partidos_perdidos;
    int goles_favor;
    int goles_contra;
    int diferencia_goles;
};

void leer_equipos(equipos x[]){
    for(int i=0;i<8;i++){
        cout<<"Ingrese el nombre del equipo "<<i+1<<": ";
        cin.ignore();
        cin.getline(x[i].nombre,20,'\n');
        x[i].puntos=0;
        x[i].partidos_ganados=0;
        x[i].partidos_empatados=0;
        x[i].partidos_perdidos=0;
        x[i].goles_favor=0;
        x[i].goles_contra=0;
        x[i].diferencia_goles=0;
    }
}

void simulacion_manual(equipos x[]){
    int goles_equipo1,goles_equipo2;
    for(int i=1;i<8;i++){
            getchar();
            cout<<"Pulse enter para continuar"<<endl;
            cout<<"Equipo "<<1<<" vs "<<"Equipo "<<i+1<<endl;
            cout<<x[0].nombre<<" vs "<<x[i].nombre<<endl;
            goles_equipo1=rand()%10;
            goles_equipo2=rand()%10;
            x[0].goles_favor+=goles_equipo1;
            x[0].goles_contra+=goles_equipo2;
            x[i].goles_favor+=goles_equipo2;
            x[i].goles_contra+=goles_equipo1;
            cout<<goles_equipo1<<" - "<<goles_equipo2<<endl;
    }
    for(int i=2;i<8;i++){
            getchar();
            cout<<"Pulse enter para continuar"<<endl;
            cout<<"Equipo "<<2<<" vs "<<"Equipo "<<i+1<<endl;
            cout<<x[1].nombre<<" vs "<<x[i].nombre<<endl;
            goles_equipo1=rand()%10;
            goles_equipo2=rand()%10;
            x[1].goles_favor+=goles_equipo1;
            x[1].goles_contra+=goles_equipo2;
            x[i].goles_favor+=goles_equipo2;
            x[i].goles_contra+=goles_equipo1;
            cout<<goles_equipo1<<" - "<<goles_equipo2<<endl;
    }
    for(int i=3;i<8;i++){
            getchar();
            cout<<"Pulse enter para continuar"<<endl;
            cout<<"Equipo "<<3<<" vs "<<"Equipo "<<i+1<<endl;
            cout<<x[2].nombre<<" vs "<<x[i].nombre<<endl;
            goles_equipo1=rand()%10;
            goles_equipo2=rand()%10;
            x[2].goles_favor+=goles_equipo1;
            x[2].goles_contra+=goles_equipo2;
            x[i].goles_favor+=goles_equipo2;
            x[i].goles_contra+=goles_equipo1;
            cout<<goles_equipo1<<" - "<<goles_equipo2<<endl;
    }
    for(int i=4;i<8;i++){
            getchar();
            cout<<"Pulse enter para continuar"<<endl;
            cout<<"Equipo "<<4<<" vs "<<"Equipo "<<i+1<<endl;
            cout<<x[3].nombre<<" vs "<<x[i].nombre<<endl;
            goles_equipo1=rand()%10;
            goles_equipo2=rand()%10;
            x[3].goles_favor+=goles_equipo1;
            x[3].goles_contra+=goles_equipo2;
            x[i].goles_favor+=goles_equipo2;
            x[i].goles_contra+=goles_equipo1;
            cout<<goles_equipo1<<" - "<<goles_equipo2<<endl;
    }
    for(int i=5;i<8;i++){
            getchar();
            cout<<"Pulse enter para continuar"<<endl;
            cout<<"Equipo "<<5<<" vs "<<"Equipo "<<i+1<<endl;
            cout<<x[4].nombre<<" vs "<<x[i].nombre<<endl;
            goles_equipo1=rand()%10;
            goles_equipo2=rand()%10;
            x[4].goles_favor+=goles_equipo1;
            x[4].goles_contra+=goles_equipo2;
            x[i].goles_favor+=goles_equipo2;
            x[i].goles_contra+=goles_equipo1;
            cout<<goles_equipo1<<" - "<<goles_equipo2<<endl;
    }
    for(int i=6;i<8;i++){
            getchar();
            cout<<"Pulse enter para continuar"<<endl;
            cout<<"Equipo "<<6<<" vs "<<"Equipo "<<i+1<<endl;
            cout<<x[5].nombre<<" vs "<<x[i].nombre<<endl;
            goles_equipo1=rand()%10;
            goles_equipo2=rand()%10;
            x[5].goles_favor+=goles_equipo1;
            x[5].goles_contra+=goles_equipo2;
            x[i].goles_favor+=goles_equipo2;
            x[i].goles_contra+=goles_equipo1;
            cout<<goles_equipo1<<" - "<<goles_equipo2<<endl;
    }
    for(int i=7;i<8;i++){
            getchar();
            cout<<"Pulse enter para continuar"<<endl;
            cout<<"Equipo "<<7<<" vs "<<"Equipo "<<i+1<<endl;
            cout<<x[6].nombre<<" vs "<<x[i].nombre<<endl;
            goles_equipo1=rand()%10;
            goles_equipo2=rand()%10;
            x[6].goles_favor+=goles_equipo1;
            x[6].goles_contra+=goles_equipo2;
            x[i].goles_favor+=goles_equipo2;
            x[i].goles_contra+=goles_equipo1;
            cout<<goles_equipo1<<" - "<<goles_equipo2<<endl;
    }

}

void simulacion_automatica(equipos x[]){
     int goles_equipo1,goles_equipo2;
    for(int i=1;i<8;i++){
            cout<<"Equipo "<<1<<" vs "<<"Equipo "<<i+1<<endl;
            cout<<x[0].nombre<<" vs "<<x[i].nombre<<endl;
            goles_equipo1=rand()%10;
            goles_equipo2=rand()%10;
            x[0].goles_favor+=goles_equipo1;
            x[0].goles_contra+=goles_equipo2;
            x[i].goles_favor+=goles_equipo2;
            x[i].goles_contra+=goles_equipo1;
            cout<<goles_equipo1<<" - "<<goles_equipo2<<endl;
    }
    for(int i=2;i<8;i++){
            cout<<"Equipo "<<2<<" vs "<<"Equipo "<<i+1<<endl;
            cout<<x[1].nombre<<" vs "<<x[i].nombre<<endl;
            goles_equipo1=rand()%10;
            goles_equipo2=rand()%10;
            x[1].goles_favor+=goles_equipo1;
            x[1].goles_contra+=goles_equipo2;
            x[i].goles_favor+=goles_equipo2;
            x[i].goles_contra+=goles_equipo1;
            cout<<goles_equipo1<<" - "<<goles_equipo2<<endl;
    }
    for(int i=3;i<8;i++){
            cout<<"Equipo "<<3<<" vs "<<"Equipo "<<i+1<<endl;
            cout<<x[2].nombre<<" vs "<<x[i].nombre<<endl;
            goles_equipo1=rand()%10;
            goles_equipo2=rand()%10;
            x[2].goles_favor+=goles_equipo1;
            x[2].goles_contra+=goles_equipo2;
            x[i].goles_favor+=goles_equipo2;
            x[i].goles_contra+=goles_equipo1;
            cout<<goles_equipo1<<" - "<<goles_equipo2<<endl;
    }
    for(int i=4;i<8;i++){
            cout<<"Equipo "<<4<<" vs "<<"Equipo "<<i+1<<endl;
            cout<<x[3].nombre<<" vs "<<x[i].nombre<<endl;
            goles_equipo1=rand()%10;
            goles_equipo2=rand()%10;
            x[3].goles_favor+=goles_equipo1;
            x[3].goles_contra+=goles_equipo2;
            x[i].goles_favor+=goles_equipo2;
            x[i].goles_contra+=goles_equipo1;
            cout<<goles_equipo1<<" - "<<goles_equipo2<<endl;
    }
    for(int i=5;i<8;i++){
            cout<<"Equipo "<<5<<" vs "<<"Equipo "<<i+1<<endl;
            cout<<x[4].nombre<<" vs "<<x[i].nombre<<endl;
            goles_equipo1=rand()%10;
            goles_equipo2=rand()%10;
            x[4].goles_favor+=goles_equipo1;
            x[4].goles_contra+=goles_equipo2;
            x[i].goles_favor+=goles_equipo2;
            x[i].goles_contra+=goles_equipo1;
            cout<<goles_equipo1<<" - "<<goles_equipo2<<endl;
    }
    for(int i=6;i<8;i++){
            cout<<"Equipo "<<6<<" vs "<<"Equipo "<<i+1<<endl;
            cout<<x[5].nombre<<" vs "<<x[i].nombre<<endl;
            goles_equipo1=rand()%10;
            goles_equipo2=rand()%10;
            x[5].goles_favor+=goles_equipo1;
            x[5].goles_contra+=goles_equipo2;
            x[i].goles_favor+=goles_equipo2;
            x[i].goles_contra+=goles_equipo1;
            cout<<goles_equipo1<<" - "<<goles_equipo2<<endl;
    }
    for(int i=7;i<8;i++){
            cout<<"Equipo "<<7<<" vs "<<"Equipo "<<i+1<<endl;
            cout<<x[6].nombre<<" vs "<<x[i].nombre<<endl;
            goles_equipo1=rand()%10;
            goles_equipo2=rand()%10;
            x[6].goles_favor+=goles_equipo1;
            x[6].goles_contra+=goles_equipo2;
            x[i].goles_favor+=goles_equipo2;
            x[i].goles_contra+=goles_equipo1;
            cout<<goles_equipo1<<" - "<<goles_equipo2<<endl;
    }   
}

int main(){
    srand(time(NULL));
    equipos x[8];
    leer_equipos(x);
    //simulacion_manual(x);
    simulacion_automatica(x);
    return 0;
}
