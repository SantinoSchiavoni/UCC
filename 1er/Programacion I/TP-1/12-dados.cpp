/*Realizar un programa que simule un juego de dados con las siguientes reglas: El
jugador tira 2 dados. Cada dado tiene 6 caras. Las caras contienen 1,2,3,4,5 y 6
puntos.
Una vez los dados se hayan detenido, se calcula la suma de los puntos de las dos
caras superiores:
- Si la suma es 7 u 11, el jugador gana y acaba el juego.
- Si la suma es 2,3 o 12, el jugador pierde y acaba el juego.
- Si la suma da un número diferente a los ya mencionados, se repite la jugada
hasta que se gane o se pierda.*/

#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main(){
    srand(time(NULL));
int dado1, dado2, njugador=1;
int suma1=1, suma2=0;
bool bandera;

while(bandera){
dado1=rand()%6+1;
dado2=rand()%6+1;

cout<<"Jugador N: "<<njugador<<endl;
cout<<"dado 1: "<<dado1<<endl;
cout<<"dado 2: "<<dado2<<endl;
suma2 = dado1 + dado2;

if(suma2==7 || suma2==11){
    cout<<"gano jugador: "<<njugador<<endl;
    bandera=false;

} else if(suma2==2|| suma2==3 || suma2==12){
    cout<<"Perdio el jugador: "<<njugador<<endl;
    bandera=false;
}
else{
    njugador++;
    }
if(njugador==3){
    njugador=1;
}
}
return 0;
}