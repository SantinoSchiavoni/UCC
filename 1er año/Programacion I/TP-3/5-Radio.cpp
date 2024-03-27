/*
En una radio se necesita almacenar la información correspondiente a un grupo de
canciones (máximo 100) en formato MP3. Para cada canción se dispone de los
siguientes datos:
○ Artista (tira de caracteres de longitud 20).
○ Título (tira de caracteres de longitud 40) Duración (entero).
○ Tamaño del fichero (entero)
Obtener un programa a que permita mediante un menú realizar las siguientes
operaciones:
● Añadir una nueva canción (solo si no existe ya).
● Mostrar el título de todas las canciones.
● Buscar la canción que contenga un cierto texto (en el artista o en el título).
*/

#include <iostream>
#include <string.h>
using namespace std;

struct mp3
{
    char artista[20];
    char titulo[40];
    float dura;
    float tama;
};

void menu()
{
    cout << "**********MENU**********" << endl;
    cout << "************************" << endl;
    cout << "1. AGREGAR CANCION" << endl;
    cout << "2. LISTAR CANCIONES" << endl;
    cout << "3. BUSCAR (cancion o titulo)" << endl;
    cout << "4. SALIR" << endl;
}

int existe(mp3 x[], char ar[20], char ti[40], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(x[i].artista, ar) == 0 && strcmp(x[i].titulo, ti) == 0)
        {
            return 1;
        }
    }
    return -1;
}

void agregar(mp3 x[], int &n)
{
    char ar[20], ti[40];
    cin.ignore();
    cout << "Ingrese el artista: " << endl;
    cin.getline(ar, 20, '\n');
    cout << "Ingrese el titulo: " << endl;
    cin.getline(ti, 40, '\n');
    if (existe(x, ar, ti, n) == 1)
    {
        cout << "La cancion ya existe" << endl;
    }
    else
    {
        strcpy(x[n].artista, ar);
        strcpy(x[n].titulo, ti);
        cout << "Ingrese la duracion: " << endl;
        cin >> x[n].dura;
        cout << "Ingrese el tamaño: " << endl;
        cin >> x[n].tama;
        n++;
    }
}

void listar(mp3 x[], int n)
{
    cout << "**********LISTA DE CANCIONES**********" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Artista: " << x[i].artista << endl;
        cout << "Titulo: " << x[i].titulo << endl;
        cout << "-----------------------" << endl;
    }
}

void buscar(mp3 x[], int n, char text[40])
{
    bool band=0;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(x[i].artista, text) == 0 || strcmp(x[i].titulo, text) == 0)
        {
            cout << "Artista: " << x[i].artista << endl;
            cout << "Titulo: " << x[i].titulo << endl;
            cout << "Duracion: " << x[i].dura << endl;
            cout << "Tamaño: " << x[i].tama << endl;
            band=1;
        }
    }
    if(band==0){
        cout<<"No se encontro el texto"<<endl;
    }
}

int main()
{
    mp3 A[100];
    int ncanciones = 0, opcion;
    char text[40];

    do
    {
        menu();
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        cout << " " << endl;
        switch (opcion)
        {
        case 1:
            agregar(A, ncanciones);
            break;
        case 2:
            listar(A, ncanciones);
            break;
        case 3:
            cout << "Ingrese el artista o titulo a buscar: " << endl;
            cin.ignore();
            cin.getline(text, 40, '\n');
            buscar(A, ncanciones, text);
            break;
        }
    } while (opcion != 4);
}