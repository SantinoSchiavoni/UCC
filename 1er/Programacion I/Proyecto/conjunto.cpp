/*
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
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <ctime>
#include <iomanip>

using namespace std;

struct equipos
{
    char nombre[20];
    int puntos;
    int goles_favor;
    int goles_contra;
    int diferencia_goles;
    
};

void menu(){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 6);
    cout<<"----------------MENU------------------"<<endl;
    cout<<"1.Simular partidos uno por uno."<<endl;
    cout<<"2.Simulacion automatica"<<endl;
    cout<<"Selecione una opcion: "<<endl;
}

void leer_equipos(equipos x[]){
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 3);
    cout<<"------------Bienvenidos al Mundialito de futbol-------"<<endl;
    cout<<"Ingrese el nombre de los 8 equipos participantes antes de continuar: "<<endl;
    for(int i=0;i<8;i++){
        cout<<"Ingrese el nombre del equipo "<<i+1<<": "<<endl;
        cin>>ws;
        cin.getline(x[i].nombre,20,'\n');
        x[i].puntos=0;
        x[i].goles_favor=0;
        x[i].goles_contra=0;
        x[i].diferencia_goles=0;
    }
        cout<<"**************EQUIPOS CARGADOS**************"<<endl;
        cout<<""<<endl; 
}

void simulacion_manual(equipos x[],int infpar[8][3]){
        int goles_equipo1,goles_equipo2;
        
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        ofstream empatados;
        empatados.open("C:/Users/tauri/OneDrive/Escritorio/Proyecto final Programacion/empatados.txt");
        ofstream superganadores;
        superganadores.open("C:/Users/tauri/OneDrive/Escritorio/Proyecto final Programacion/superganadores.txt");
        ofstream superperdedores;
        superperdedores.open ("C:/Users/tauri/OneDrive/Escritorio/Proyecto final Programacion/superperdedores.txt");

        for(int i=0;i<8;i++){
            for(int j=0;j<3;j++){
                infpar[i][j]=0;
            }
        }

        SetConsoleTextAttribute(hConsole, 1);
        getchar();
        cout<<"**************SIMULACION MANUAL**************"<<endl;
        cout<<""<<endl;
        cout<<"EQUIPO 1"<<endl;
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

            if ((goles_equipo1-goles_equipo2)>5){
                superganadores<<"El equipo: "<<x[0].nombre<<" le gano por mas de 5 goles de diferencia a: "<<x[i].nombre<<" el partido termino: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
                superperdedores<<"El equipo: "<<x[i].nombre<<" perdio por mas de 5 goles de diferencia con: "<<x[0].nombre<<" el partido termino: "<<goles_equipo2<<" - "<<goles_equipo1<<endl;
            }
            else if ((goles_equipo2-goles_equipo1)>5){
                superganadores<<"El equipo: "<<x[i].nombre<<" le gano por mas de 5 goles de diferencia a: "<<x[0].nombre<<" el partido termino: "<<goles_equipo2<<" - "<<goles_equipo1<<endl;
                superperdedores<<"El equipo: "<<x[0].nombre<<" perdio por mas de 5 goles de diferencia con: "<<x[i].nombre<<" el partido termino: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
            }

            if (goles_equipo1>goles_equipo2){
                infpar[0][0]++;
                infpar[i][1]++;
                x[0].puntos+=5;
            
            }
            else if(goles_equipo1==goles_equipo2){
                infpar[0][2]++;
                infpar[i][2]++;
                empatados<<"Los equipos "<<x[0].nombre<<" y "<<x[i].nombre<<", empataron: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
                x[0].puntos+=2;
                x[i].puntos+=2;
                  
            }
            else
            {
                infpar[0][1]++;
                infpar[i][0]++;
                x[i].puntos+=5;
            }
        cout<<"Presione enter para continuar"<<endl;
        getchar();
            
        }
        SetConsoleTextAttribute(hConsole, 2);
        cout<<""<<endl;
        cout<<"EQUIPO 2"<<endl;

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

            if ((goles_equipo1-goles_equipo2)>5){
                superganadores<<"El equipo: "<<x[1].nombre<<" le gano por mas de 5 goles de diferencia a: "<<x[i].nombre<<" el partido termino: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
                superperdedores<<"El equipo: "<<x[i].nombre<<" perdio por mas de 5 goles de diferencia con: "<<x[1].nombre<<" el partido termino: "<<goles_equipo2<<" - "<<goles_equipo1<<endl;
            }
            else if ((goles_equipo2-goles_equipo1)>5){
                superganadores<<"El equipo: "<<x[i].nombre<<" le gano por mas de 5 goles de diferencia a: "<<x[1].nombre<<" el partido termino: "<<goles_equipo2<<" - "<<goles_equipo1<<endl;
                superperdedores<<"El equipo: "<<x[1].nombre<<" perdio por mas de 5 goles de diferencia con: "<<x[i].nombre<<" el partido termino: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
            }

            if (goles_equipo1>goles_equipo2){
                infpar[1][0]++;
                infpar[i][1]++;
                x[1].puntos+=5;
            
            }
            else if(goles_equipo1==goles_equipo2){
                infpar[1][2]++;
                infpar[i][2]++;
                empatados<<"Los equipos "<<x[1].nombre<<" y "<<x[i].nombre<<", empataron: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
                x[1].puntos+=2;
                x[i].puntos+=2;
                  
            }
            else
            {
                infpar[1][1]++;
                infpar[i][0]++;
                x[i].puntos+=5;
            }
        cout<<"Presione enter para continuar"<<endl;
        getchar(); 
                
        }
        SetConsoleTextAttribute(hConsole, 3);
        cout<<""<<endl;
        cout<<"EQUIPO 3"<<endl;

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

            if ((goles_equipo1-goles_equipo2)>5){
                superganadores<<"El equipo: "<<x[2].nombre<<" le gano por mas de 5 goles de diferencia a: "<<x[i].nombre<<" el partido termino: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
                superperdedores<<"El equipo: "<<x[i].nombre<<" perdio por mas de 5 goles de diferencia con: "<<x[2].nombre<<" el partido termino: "<<goles_equipo2<<" - "<<goles_equipo1<<endl;
            }
            else if ((goles_equipo2-goles_equipo1)>5){
                superganadores<<"El equipo: "<<x[i].nombre<<" le gano por mas de 5 goles de diferencia a: "<<x[2].nombre<<" el partido termino: "<<goles_equipo2<<" - "<<goles_equipo1<<endl;
                superperdedores<<"El equipo: "<<x[2].nombre<<" perdio por mas de 5 goles de diferencia con: "<<x[i].nombre<<" el partido termino: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
            }

            if (goles_equipo1>goles_equipo2){
                infpar[2][0]++;
                infpar[i][1]++;
                x[2].puntos+=5;
            
            }
            else if(goles_equipo1==goles_equipo2){
                infpar[2][2]++;
                infpar[i][2]++;
                empatados<<"Los equipos "<<x[2].nombre<<" y "<<x[i].nombre<<", empataron: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
                x[2].puntos+=2;
                x[i].puntos+=2;
                  
            }
            else
            {
                infpar[2][1]++;
                infpar[i][0]++;
                x[i].puntos+=5;
            }
        cout<<"Presione enter para continuar"<<endl;
        getchar();
        }
        SetConsoleTextAttribute(hConsole, 4);
        cout<<""<<endl;
        cout<<"EQUIPO 4"<<endl;

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

            if ((goles_equipo1-goles_equipo2)>5){
                superganadores<<"El equipo: "<<x[3].nombre<<" le gano por mas de 5 goles de diferencia a: "<<x[i].nombre<<" el partido termino: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
                superperdedores<<"El equipo: "<<x[i].nombre<<" perdio por mas de 5 goles de diferencia con: "<<x[3].nombre<<" el partido termino: "<<goles_equipo2<<" - "<<goles_equipo1<<endl;
            }
            else if ((goles_equipo2-goles_equipo1)>5){
                superganadores<<"El equipo: "<<x[i].nombre<<" le gano por mas de 5 goles de diferencia a: "<<x[3].nombre<<" el partido termino: "<<goles_equipo2<<" - "<<goles_equipo1<<endl;
                superperdedores<<"El equipo: "<<x[3].nombre<<" perdio por mas de 5 goles de diferencia con: "<<x[i].nombre<<" el partido termino: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
            }

            if (goles_equipo1>goles_equipo2){
                infpar[3][0]++;
                infpar[i][1]++;
                x[3].puntos+=5;
            
            }
            else if(goles_equipo1==goles_equipo2){
                infpar[3][2]++;
                infpar[i][2]++;
                empatados<<"Los equipos "<<x[3].nombre<<" y "<<x[i].nombre<<", empataron: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
                x[3].puntos+=2;
                x[i].puntos+=2;
                  
            }
            else
            {
                infpar[3][1]++;
                infpar[i][0]++;
                x[i].puntos+=5;
            }
        cout<<"Presione enter para continuar"<<endl;
        getchar();
        }
        SetConsoleTextAttribute(hConsole, 5);
        cout<<""<<endl;
        cout<<"EQUIPO 5"<<endl;

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

            if ((goles_equipo1-goles_equipo2)>5){
                superganadores<<"El equipo: "<<x[4].nombre<<" le gano por mas de 5 goles de diferencia a: "<<x[i].nombre<<" el partido termino: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
                superperdedores<<"El equipo: "<<x[i].nombre<<" perdio por mas de 5 goles de diferencia con: "<<x[4].nombre<<" el partido termino: "<<goles_equipo2<<" - "<<goles_equipo1<<endl;
            }
            else if ((goles_equipo2-goles_equipo1)>5){
                superganadores<<"El equipo: "<<x[i].nombre<<" le gano por mas de 5 goles de diferencia a: "<<x[4].nombre<<" el partido termino: "<<goles_equipo2<<" - "<<goles_equipo1<<endl;
                superperdedores<<"El equipo: "<<x[4].nombre<<" perdio por mas de 5 goles de diferencia con: "<<x[i].nombre<<" el partido termino: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
            }

            if (goles_equipo1>goles_equipo2){
                infpar[4][0]++;
                infpar[i][1]++;
                x[4].puntos+=5;
            
            }
            else if(goles_equipo1==goles_equipo2){
                infpar[4][2]++;
                infpar[i][2]++;
                empatados<<"Los equipos "<<x[4].nombre<<" y "<<x[i].nombre<<", empataron: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
                x[4].puntos+=2;
                x[i].puntos+=2;
                  
            }
            else
            {
                infpar[4][1]++;
                infpar[i][0]++;
                x[i].puntos+=5;
            }
        cout<<"Presione enter para continuar"<<endl;
        getchar();
        }
        SetConsoleTextAttribute(hConsole, 6);
        cout<<""<<endl;
        cout<<"EQUIPO 6"<<endl;

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

            if ((goles_equipo1-goles_equipo2)>5){
                superganadores<<"El equipo: "<<x[5].nombre<<" le gano por mas de 5 goles de diferencia a: "<<x[i].nombre<<" el partido termino: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
                superperdedores<<"El equipo: "<<x[i].nombre<<" perdio por mas de 5 goles de diferencia con: "<<x[5].nombre<<" el partido termino: "<<goles_equipo2<<" - "<<goles_equipo1<<endl;
            }
            else if ((goles_equipo2-goles_equipo1)>5){
                superganadores<<"El equipo: "<<x[i].nombre<<" le gano por mas de 5 goles de diferencia a: "<<x[5].nombre<<" el partido termino: "<<goles_equipo2<<" - "<<goles_equipo1<<endl;
                superperdedores<<"El equipo: "<<x[5].nombre<<" perdio por mas de 5 goles de diferencia con: "<<x[i].nombre<<" el partido termino: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
            }

            if (goles_equipo1>goles_equipo2){
                infpar[5][0]++;
                infpar[i][1]++;
                x[5].puntos+=5;
            
            }
            else if(goles_equipo1==goles_equipo2){
                infpar[5][2]++;
                infpar[i][2]++;
                empatados<<"Los equipos "<<x[5].nombre<<" y "<<x[i].nombre<<", empataron: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
                x[5].puntos+=2;
                x[i].puntos+=2;
                  
            }
            else
            {
                infpar[5][1]++;
                infpar[i][0]++;
                x[i].puntos+=5;
            }
        cout<<"Presione enter para continuar"<<endl;
        getchar();
        }

        SetConsoleTextAttribute(hConsole, 7);
        cout<<""<<endl;
        cout<<"EQUIPO 7"<<endl;
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

            if ((goles_equipo1-goles_equipo2)>5){
                superganadores<<"El equipo: "<<x[6].nombre<<" le gano por mas de 5 goles de diferencia a: "<<x[i].nombre<<" el partido termino: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
                superperdedores<<"El equipo: "<<x[i].nombre<<" perdio por mas de 5 goles de diferencia con: "<<x[6].nombre<<" el partido termino: "<<goles_equipo2<<" - "<<goles_equipo1<<endl;
            }
            else if ((goles_equipo2-goles_equipo1)>5){
                superganadores<<"El equipo: "<<x[i].nombre<<" le gano por mas de 5 goles de diferencia a: "<<x[6].nombre<<" el partido termino: "<<goles_equipo2<<" - "<<goles_equipo1<<endl;
                superperdedores<<"El equipo: "<<x[6].nombre<<" perdio por mas de 5 goles de diferencia con: "<<x[i].nombre<<" el partido termino: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
            }

            if (goles_equipo1>goles_equipo2){
                infpar[6][0]++;
                infpar[i][1]++; 
                x[6].puntos+=5;
            
            }
            else if(goles_equipo1==goles_equipo2){
                infpar[6][2]++;
                infpar[i][2]++;
                empatados<<"Los equipos "<<x[6].nombre<<" y "<<x[i].nombre<<", empataron: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
                x[6].puntos+=2;
                x[i].puntos+=2;
                  
            }
            else
            {
                infpar[6][1]++;
                infpar[i][0]++;
                x[i].puntos+=5;
            }
        cout<<"Presione enter para finalizar"<<endl;
        getchar();
        }
        cout<<"**************SIMULACION FINALIZADA**************"<<endl;
}

void simulacion_automatica(equipos x[],int infpar[8][3]){
        int goles_equipo1,goles_equipo2;
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        ofstream empatados;
        empatados.open("C:/Users/tauri/OneDrive/Escritorio/Proyecto final Programacion/empatados.txt");
        ofstream superganadores;
        superganadores.open("C:/Users/tauri/OneDrive/Escritorio/Proyecto final Programacion/superganadores.txt");
        ofstream superperdedores;
        superperdedores.open ("C:/Users/tauri/OneDrive/Escritorio/Proyecto final Programacion/superperdedores.txt");

            for(int i=0;i<8;i++){
            for(int j=0;j<3;j++){
                infpar[i][j]=0;
            }
        }

        SetConsoleTextAttribute(hConsole, 1);
        cout<<"**************SIMULACION AUTOMATICA**************"<<endl;
        cout<<""<<endl;
        cout<<"EQUIPO 1"<<endl;

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
            
            if ((goles_equipo1-goles_equipo2)>5){
                superganadores<<"El equipo: "<<x[0].nombre<<" le gano por mas de 5 goles de diferencia a: "<<x[i].nombre<<" el partido termino: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
                superperdedores<<"El equipo: "<<x[i].nombre<<" perdio por mas de 5 goles de diferencia con: "<<x[0].nombre<<" el partido termino: "<<goles_equipo2<<" - "<<goles_equipo1<<endl;
            }
            else if ((goles_equipo2-goles_equipo1)>5){
                superganadores<<"El equipo: "<<x[i].nombre<<" le gano por mas de 5 goles de diferencia a: "<<x[0].nombre<<" el partido termino: "<<goles_equipo2<<" - "<<goles_equipo1<<endl;
                superperdedores<<"El equipo: "<<x[0].nombre<<" perdio por mas de 5 goles de diferencia con: "<<x[i].nombre<<" el partido termino: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
            }

             if (goles_equipo1>goles_equipo2){
                infpar[0][0]++;
                infpar[i][1]++;
                x[0].puntos+=5;
            
            }
            else if(goles_equipo1==goles_equipo2){
                infpar[0][2]++;
                infpar[i][2]++;
                empatados<<"Los equipos "<<x[0].nombre<<" y "<<x[i].nombre<<", empataron: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
                x[0].puntos+=2;
                x[i].puntos+=2;
                  
            }
            else
            {
                infpar[0][1]++;
                infpar[i][0]++;
                x[i].puntos+=5;
            }

            
        }
        SetConsoleTextAttribute(hConsole, 2);
        cout<<""<<endl;
        cout<<"EQUIPO 2"<<endl;

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

            if ((goles_equipo1-goles_equipo2)>5){
                superganadores<<"El equipo: "<<x[1].nombre<<" le gano por mas de 5 goles de diferencia a: "<<x[i].nombre<<" el partido termino: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
                superperdedores<<"El equipo: "<<x[i].nombre<<" perdio por mas de 5 goles de diferencia con: "<<x[1].nombre<<" el partido termino: "<<goles_equipo2<<" - "<<goles_equipo1<<endl;
            }
            else if ((goles_equipo2-goles_equipo1)>5){
                superganadores<<"El equipo: "<<x[i].nombre<<" le gano por mas de 5 goles de diferencia a: "<<x[1].nombre<<" el partido termino: "<<goles_equipo2<<" - "<<goles_equipo1<<endl;
                superperdedores<<"El equipo: "<<x[1].nombre<<" perdio por mas de 5 goles de diferencia con: "<<x[i].nombre<<" el partido termino: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
            }
            
             if (goles_equipo1>goles_equipo2){
                infpar[1][0]++;
                infpar[i][1]++;
                x[1].puntos+=5;
            
            }
            else if(goles_equipo1==goles_equipo2){
                infpar[1][2]++;
                infpar[i][2]++;
                empatados<<"Los equipos "<<x[1].nombre<<" y "<<x[i].nombre<<", empataron: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
                x[1].puntos+=2;
                x[i].puntos+=2;
                  
            }
            else
            {
                infpar[1][1]++;
                infpar[i][0]++;
                x[i].puntos+=5;
            }
 
        }
        SetConsoleTextAttribute(hConsole, 3);
        cout<<""<<endl;
        cout<<"EQUIPO 3"<<endl;

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
            
            if ((goles_equipo1-goles_equipo2)>5){
                superganadores<<"El equipo: "<<x[2].nombre<<" le gano por mas de 5 goles de diferencia a: "<<x[i].nombre<<" el partido termino: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
                superperdedores<<"El equipo: "<<x[i].nombre<<" perdio por mas de 5 goles de diferencia con: "<<x[2].nombre<<" el partido termino: "<<goles_equipo2<<" - "<<goles_equipo1<<endl;
            }
            else if ((goles_equipo2-goles_equipo1)>5){
                superganadores<<"El equipo: "<<x[i].nombre<<" le gano por mas de 5 goles de diferencia a: "<<x[2].nombre<<" el partido termino: "<<goles_equipo2<<" - "<<goles_equipo1<<endl;
                superperdedores<<"El equipo: "<<x[2].nombre<<" perdio por mas de 5 goles de diferencia con: "<<x[i].nombre<<" el partido termino: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
            }
             if (goles_equipo1>goles_equipo2){
                infpar[2][0]++;
                infpar[i][1]++;
                x[2].puntos+=5;
            
            }
            else if(goles_equipo1==goles_equipo2){
                infpar[2][2]++;
                infpar[i][2]++;
                empatados<<"Los equipos "<<x[2].nombre<<" y "<<x[i].nombre<<", empataron: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
                x[2].puntos+=2;
                x[i].puntos+=2;
                  
            }
            else
            {
                infpar[2][1]++;
                infpar[i][0]++;
                x[i].puntos+=5;
            }

        }
        SetConsoleTextAttribute(hConsole, 4);
        cout<<""<<endl;
        cout<<"EQUIPO 4"<<endl;

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

            if ((goles_equipo1-goles_equipo2)>5){
                superganadores<<"El equipo: "<<x[3].nombre<<" le gano por mas de 5 goles de diferencia a: "<<x[i].nombre<<" el partido termino: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
                superperdedores<<"El equipo: "<<x[i].nombre<<" perdio por mas de 5 goles de diferencia con: "<<x[3].nombre<<" el partido termino: "<<goles_equipo2<<" - "<<goles_equipo1<<endl;
            }
            else if ((goles_equipo2-goles_equipo1)>5){
                superganadores<<"El equipo: "<<x[i].nombre<<" le gano por mas de 5 goles de diferencia a: "<<x[3].nombre<<" el partido termino: "<<goles_equipo2<<" - "<<goles_equipo1<<endl;
                superperdedores<<"El equipo: "<<x[3].nombre<<" perdio por mas de 5 goles de diferencia con: "<<x[i].nombre<<" el partido termino: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
            }
             if (goles_equipo1>goles_equipo2){
                infpar[3][0]++;
                infpar[i][1]++;
                x[3].puntos+=5;
            
            }
            else if(goles_equipo1==goles_equipo2){
                infpar[3][2]++;
                infpar[i][2]++;
                empatados<<"Los equipos "<<x[3].nombre<<" y "<<x[i].nombre<<", empataron: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
                x[3].puntos+=2;
                x[i].puntos+=2;
            }
            else
            {
                infpar[3][1]++;
                infpar[i][0]++;
                x[i].puntos+=5;
            }

        }
        SetConsoleTextAttribute(hConsole, 5);
        cout<<""<<endl;
        cout<<"EQUIPO 5"<<endl;

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
            
            if ((goles_equipo1-goles_equipo2)>5){
                superganadores<<"El equipo: "<<x[4].nombre<<" le gano por mas de 5 goles de diferencia a: "<<x[i].nombre<<" el partido termino: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
                superperdedores<<"El equipo: "<<x[i].nombre<<" perdio por mas de 5 goles de diferencia con: "<<x[4].nombre<<" el partido termino: "<<goles_equipo2<<" - "<<goles_equipo1<<endl;
            }
            else if ((goles_equipo2-goles_equipo1)>5){
                superganadores<<"El equipo: "<<x[i].nombre<<" le gano por mas de 5 goles de diferencia a: "<<x[0].nombre<<" el partido termino: "<<goles_equipo2<<" - "<<goles_equipo1<<endl;
                superperdedores<<"El equipo: "<<x[4].nombre<<" perdio por mas de 5 goles de diferencia con: "<<x[4].nombre<<" el partido termino: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
            }
            
             if (goles_equipo1>goles_equipo2){
                infpar[4][0]++;
                infpar[i][1]++;
                x[4].puntos+=5;
            
            }
            else if(goles_equipo1==goles_equipo2){
                infpar[4][2]++;
                infpar[i][2]++;
                empatados<<"Los equipos "<<x[4].nombre<<" y "<<x[i].nombre<<", empataron: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
                x[4].puntos+=2;
                x[i].puntos+=2;
                  
            }
            else
            {
                infpar[4][1]++;
                infpar[i][0]++;
                x[i].puntos+=5;
            }


        }
        SetConsoleTextAttribute(hConsole, 6);
        cout<<""<<endl;
        cout<<"EQUIPO 6"<<endl;

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

            if ((goles_equipo1-goles_equipo2)>5){
                superganadores<<"El equipo: "<<x[5].nombre<<" le gano por mas de 5 goles de diferencia a: "<<x[i].nombre<<" el partido termino: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
                superperdedores<<"El equipo: "<<x[i].nombre<<" perdio por mas de 5 goles de diferencia con: "<<x[5].nombre<<" el partido termino: "<<goles_equipo2<<" - "<<goles_equipo1<<endl;
            }
            else if ((goles_equipo2-goles_equipo1)>5){
                superganadores<<"El equipo: "<<x[i].nombre<<" le gano por mas de 5 goles de diferencia a: "<<x[5].nombre<<" el partido termino: "<<goles_equipo2<<" - "<<goles_equipo1<<endl;
                superperdedores<<"El equipo: "<<x[5].nombre<<" perdio por mas de 5 goles de diferencia con: "<<x[i].nombre<<" el partido termino: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
            }

             if (goles_equipo1>goles_equipo2){
                infpar[5][0]++;
                infpar[i][1]++;
                x[5].puntos+=5;
            
            }
            else if(goles_equipo1==goles_equipo2){
                infpar[5][2]++;
                infpar[i][2]++;
                empatados<<"Los equipos "<<x[5].nombre<<" y "<<x[i].nombre<<", empataron: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
                x[5].puntos+=2;
                x[i].puntos+=2;
                  
            }
            else
            {
                infpar[5][1]++;
                infpar[i][0]++;
                x[i].puntos+=5;
            }

        }

        SetConsoleTextAttribute(hConsole, 7);
        cout<<""<<endl;
        cout<<"EQUIPO 7"<<endl;
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

            if ((goles_equipo1-goles_equipo2)>5){
                superganadores<<"El equipo: "<<x[6].nombre<<" le gano por mas de 5 goles de diferencia a: "<<x[i].nombre<<" el partido termino: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
                superperdedores<<"El equipo: "<<x[i].nombre<<" perdio por mas de 5 goles de diferencia con: "<<x[6].nombre<<" el partido termino: "<<goles_equipo2<<" - "<<goles_equipo1<<endl;
            }
            else if ((goles_equipo2-goles_equipo1)>5){
                superganadores<<"El equipo: "<<x[i].nombre<<" le gano por mas de 5 goles de diferencia a: "<<x[6].nombre<<" el partido termino: "<<goles_equipo2<<" - "<<goles_equipo1<<endl;
                superperdedores<<"El equipo: "<<x[6].nombre<<" perdio por mas de 5 goles de diferencia con: "<<x[i].nombre<<" el partido termino: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
            }

             if (goles_equipo1>goles_equipo2){
                infpar[6][0]++;
                infpar[i][1]++;
                x[6].puntos+=5;
            
            }
            else if(goles_equipo1==goles_equipo2){
                infpar[6][2]++;
                infpar[i][2]++;
                empatados<<"Los equipos "<<x[6].nombre<<" y "<<x[i].nombre<<", empataron: "<<goles_equipo1<<" - "<<goles_equipo2<<endl;
                x[6].puntos+=2;
                x[i].puntos+=2;
                  
            }
            else
            {
                infpar[6][1]++;
                infpar[i][0]++;
                x[i].puntos+=5;
            }


        }
        cout<<"**************SIMULACION FINALIZADA**************"<<endl;  
}

void ganadores4 (equipos x[], int infpar [8][3]){
    ofstream ganadoresmas4;
    ganadoresmas4.open("C:/Users/tauri/OneDrive/Escritorio/Proyecto final Programacion/ganadoresmas4.txt");
    bool band=0;
    for (int i = 0; i < 8; i++)
    {
        if(infpar[i][0]>4){
            ganadoresmas4<<"El equipo: "<<x[i].nombre<<", gano mas de 4 partidos"<<endl;
            band=1;
        }
    }
    if(band==0){
            ganadoresmas4<<"No hubo equipos que hayan ganado mas de 4 partidos."<<endl;}
}

void perdedores4 (equipos x[], int infpar[8][3]){
    ofstream perdedores4;
    perdedores4.open("C:/Users/tauri/OneDrive/Escritorio/Proyecto final Programacion/perdedoresmas4.txt");
    bool band=0;
    for (int i = 0; i < 8; i++)
    {
        if(infpar[i][2]>4){
            perdedores4<<"El equipo: "<<x[i].nombre<<", perdio mas de 4 partidos"<<endl;
            band=1;
        }
       
    }
     if(band==0){
            perdedores4<<"No hubo equipos que hayan perdido mas de 4 partidos."<<endl;
        }
}

void tabla(equipos x[], int infpar[8][3], equipos aux){
    ofstream tablapos;
    tablapos.open("C:/archivos/Proyecto/Tabla.txt");
    bool bandera=0;
    int aux1, aux2, aux3;
    while (bandera == 0)
    {
        bandera = 1;
        for (int j = 0; j < 8; j++)
        {
            if (x[j].puntos < x[j + 1].puntos)
            {
                aux = x[j];
                x[j] = x[j + 1];
                x[j + 1] = aux;

                aux1 = infpar[j][0];
                infpar[j][0] = infpar[j + 1][0];
                infpar[j + 1][0] = aux1;

                aux2 = infpar[j][1];
                infpar[j][1] = infpar[j + 1][1];
                infpar[j + 1][1] = aux2;

                aux3 = infpar[j][2];
                infpar[j][2] = infpar[j + 1][2];
                infpar[j + 1][2] = aux3;

                bandera = 0;
            }
        }
    }
      tablapos << left << setw(20) << "Nombre" << left << setw(12) << "Puntos" << left
       << setw(12) << "Ganados" << left << setw(12) << "Empatados" << left << setw(12)
       << "Perdidos" << endl;
    for (int i=0; i<8;i++)
    {
        tablapos<<left<<setw(20)<<x[i].nombre<<left<<setw(12)<<x[i].puntos<<left<<setw(12)<<infpar[i][0]<<left<<setw(12)<<infpar[i][2]<<left<<setw(12)<<infpar[i][1]<<endl;
    }

    tablapos.close();
    
}

int main(){
    char opcion;
    int infpar [8][3];
    bool band=0;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    srand(time(NULL));
    equipos x[8], aux;
    leer_equipos(x);
    while(band==0){
        menu();
        cin>>opcion;
        switch(opcion){
        case 49: //Codigo ASCII del 1
        band=1;
        simulacion_manual(x,infpar);
        break;
        case 50: //Codigo ASCII del 2
        band=1;
        simulacion_automatica(x, infpar);
        break; 
        default:
        SetConsoleTextAttribute(hConsole, 4);
        cout<<"Opcion incorrecta, ingrese nuevamente"<<endl;
        break;
    }
    }
    ganadores4(x, infpar); 
    perdedores4(x, infpar);
    tabla(x, infpar, aux);

    return 0;
}
