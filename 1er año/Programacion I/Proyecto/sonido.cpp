/*
necesito un programa que cuando le de a una tecla suene un sonido
*/

#include <iostream>
#include <conio.h>
#include <windows.h>
#include <mmsystem.h>

using namespace std;

int main(){
    char tecla;
    cout << "Presiona una tecla para escuchar un sonido" << endl;
    tecla = getch();
    switch (tecla)
    {
    case 'a':
        PlaySound(TEXT("C:/archivos/Proyecto/sonido.wav"), NULL, SND_SYNC);
        break;
    case 'b':
        PlaySound(TEXT("C:/archivos/Proyecto/sonido.wav"), NULL, SND_SYNC);
        break;
    case 'c':
        PlaySound(TEXT("C:/archivos/Proyecto/sonido.wav"), NULL, SND_SYNC);
        break;
    case 'd':
        PlaySound(TEXT("C:/archivos/Proyecto/sonido.wav"), NULL, SND_SYNC);
        break;
}
}