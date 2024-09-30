#include <iostream>
#include <thread>  // Para usar sleep_for
#include <chrono>  // Para manejar tiempos
#include <cstdlib> // Para generar números aleatorios
#include <ctime>   // Para inicializar la semilla de aleatoriedad

using namespace std;

const int Tablero = 85;
string vector1[Tablero], vector2[Tablero], vector3[Tablero], vector4[Tablero];
int cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0;
string nombre1, nombre2, nombre3, nombre4;

void cargarCaballos() {
    cout << "Ingrese el nombre del caballo 1: ";
    cin >> nombre1;
    cout << "Ingrese el nombre del caballo 2: ";
    cin >> nombre2;
    cout << "Ingrese el nombre del caballo 3: ";
    cin >> nombre3;
    cout << "Ingrese el nombre del caballo 4: ";
    cin >> nombre4;
}

void simularCarrera() {
    srand(time(0)); // Inicializar semilla de aleatoriedad
    int num1, num2, num3, num4;
    int cuota1, cuota2, cuota3, cuota4;
    int coma1, coma2, coma3, coma4;

    // Esperar a que el usuario presione Enter para iniciar la carrera
    cout << "Presione Enter para ver cuotas...";
    cin.ignore();
    cin.get();
    cout << "Cuotas de apuestas: " << endl;
    cuota1 = rand() % 3 + 1;
    cuota2 = rand() % 3 + 1;
    cuota3 = rand() % 3 + 1;
    cuota4 = rand() % 3 + 1;

    coma1 = rand() % 99 + 1;
    coma2 = rand() % 99 + 1;
    coma3 = rand() % 99 + 1;
    coma4 = rand() % 99 + 1;

    cout << "Cuota de " << nombre1 << ": " << cuota1 << "." << coma1 << endl;
    cout << "Cuota de " << nombre2 << ": " << cuota2 << "." << coma2 << endl;
    cout << "Cuota de " << nombre3 << ": " << cuota3 << "." << coma3 << endl;
    cout << "Cuota de " << nombre4 << ": " << cuota4 << "." << coma4 << endl;
    
    cout << "Presione Enter para iniciar la carrera...";
    cin.ignore();
    cin.get();
    
    for (int i = 0; i < Tablero; i++) {
        system("cls");
        cout << "********************************************** Carrera de caballos ************************************************" << endl;
        cout << "Andarivel 1: " << nombre1 << ": " << cuota1 << "." << coma1 << endl;
        cout << "Andarivel 2: " << nombre2 << ": " << cuota2 << "." << coma2 << endl;
        cout << "Andarivel 3: " << nombre3 << ": " << cuota3 << "." << coma3 << endl;
        cout << "Andarivel 4: " << nombre4 << ": " << cuota4 << "." << coma4 << endl;
        cout << "===================================================================================================================" << endl;

        // Generar números aleatorios
        num1 = rand() % 1000 + 2; 
        num2 = rand() % 1000 + 2; 
        num3 = rand() % 1000 + 2; 
        num4 = rand() % 1000 + 2; 

        if (num1 > num2 && num1 > num3 && num1 > num4) {
            vector1[i] = "--";
            vector2[i] = "-";
            vector3[i] = "-";
            vector4[i] = "-";
            cont1 += 2;
            cont2++;
            cont3++;
            cont4++;
        } if (num2 > num1 && num2 > num3 && num2 > num4) {
            vector1[i] = "-";
            vector2[i] = "--";
            vector3[i] = "-";
            vector4[i] = "-";
            cont2 += 2;
            cont1++;
            cont3++;
            cont4++;
        } if (num3 > num1 && num3 > num2 && num3 > num4) {
            vector1[i] = "-";
            vector2[i] = "-";
            vector3[i] = "--";
            vector4[i] = "-";
            cont3 += 2;
            cont1++;
            cont2++;
            cont4++;
        } if (num4 > num1 && num4 > num2 && num4 > num3) {
            vector1[i] = "-";
            vector2[i] = "-";
            vector3[i] = "-";
            vector4[i] = "--";
            cont4 += 2;
            cont1++;
            cont2++;
            cont3++;
        }

        // Concatenar los valores en una cadena
        string carrera1, carrera2, carrera3, carrera4;
        for (int j = 0; j <= i; j++) {
            carrera1 += vector1[j];
            carrera2 += vector2[j];
            carrera3 += vector3[j];
            carrera4 += vector4[j];
        }

        // Imprimir las cadenas
        cout << "||" << carrera1 << "*" <<endl;
        cout << "||" << carrera2 << "*" << endl;
        cout << "||" << carrera3 << "*" << endl;
        cout << "||" << carrera4 << "*" << endl;

        cout << "===================================================================================================================" << endl;

        // Pausar la ejecución durante 1 segundo
        this_thread::sleep_for(chrono::milliseconds(500));
    }

    // Determinar el ganador
    string ganador = nombre1;
    int maxDistancia = cont1;

    if (cont2 > maxDistancia) {
        maxDistancia = cont2;
        ganador = nombre2;
    }
    if (cont3 > maxDistancia) {
        maxDistancia = cont3;
        ganador = nombre3;
    }
    if (cont4 > maxDistancia) {
        maxDistancia = cont4;
        ganador = nombre4;
    }

    cout << "El ganador es " << ganador << "!" << endl;
}

int main() {
    cargarCaballos();
    simularCarrera();
    return 0;
}
