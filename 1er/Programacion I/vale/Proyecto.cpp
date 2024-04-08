/*
CONSIGNAS:
en el hospital Privado de la ciudad de c�rdoba, se han incrementado los casos de corona virus por  causa de la nueva Cepa Brasilera.
Se estima que todos los pacientes que est�n en camas adyacentes  a los casos contagiados tambi�n lo est�n.
Suponga que el hospital tiene una habitaci�n llena de camas las cuales est�n ubicadas de forma  rectangular.
El hospital necesita que elabore un programa en C que permita leer el n�mero de filas y  columnas para determinar
el n�mero de camas. Ejemplo. Si la habitaci�n tiene 4 filas y 3 columnas  entonces tendr� 4 X 3 = 12 camas y
por cada cama se necesita saber: la edad del paciente, nombre  del paciente, DNI del paciente,
 y n�mero de d�as internado que tiene en el hospital.
Los requerimientos urgentes que necesita el hospital son los siguientes:
1) Saber el promedio de edad que hay dentro de la habitaci�n
2) Generar un archivo.txt que contenga los nombres de los pacientes con m�s de 5 d�as internados
3) Generar un archivo.txt que contenga los nombres y DNI de los pacientes con edades  mayores al promedio
4) Dada una ubicaci�n de cama (i,j) listar los datos de ese paciente por pantalla.
5) dado un paciente infectado (i ,j), determinar cu�ntos pacientes infectados adyacentes tiene  alrededor.
Y generar un archivo.txt con los nombres de esos pacientes.
*/
/*
COMENTARIOS O IDEAS NUESTRAS:
el punto dos y 3 no necesitan corroboraci�n, por que solo son
el 1, 3 y 4 s�, el primero para chequear que sean n�meros los que introduce;
*/

#include <iostream>
#include <string.h>
#include <string>
#include <fstream>
#define fore(i,a,b) for(int i=a;i<b;i++)
using namespace std;

struct paciente{
  string edad;
  char nombre[50];
  string DNI;
  string dias;
//dias es igual a dias internados
};

bool validar(string s){
    int cant;
    cant=s.size();
    fore(i,0,cant){
        if(s[i]>57||s[i]<48){
            return false;
        }
    }
    return true;
}

bool chequear_limites (int f,int c,int f2,int c2){
    if(f<f2||f2<1){
        return false;
    }
    if(c<c2||c2<1){
        return false;
    }
    return true;
}

int promedio(paciente y[100][100],int f, int c){
    int promedio=0,aux=0;
    fore(i,0,f){
        fore(j,0,c){
            aux=stoi(y[i][j].edad);
            promedio=promedio+aux;
        }
    }
  promedio=promedio/(f*c);
    return promedio;
}

void mas_de_cinco_dias (paciente x[100][100],int f, int c){
    ofstream file;
    file.open("pacientes_con_mas_de_5_dias.txt");
    file << "LOS PACIENTES CON MAS DE 5 DIAS INTERNADOS SON:\n";
      fore(i,0,f){
      fore(j,0,c){
        if(stoi(x[i][j].dias)>5){
          file <<x[i][j].nombre << "\n";
        }
      }
    }
    file.close();
}

void mayores_al_promedio(paciente z[100][100],int f,int c,int p){
    ofstream file;
    file.open("pacientes_con_edad_mayor_al_promedio.txt");
    file << "LOS PACIENTES MAYORES A LA EDAD DEL PROMEDIO SON:\n";
        fore(i,0,f){
            fore(j,0,c){
                if(stoi(z[i][j].edad)>p){
                    file <<z[i][j].nombre <<" - DNI: "<<z[i][j].DNI<< "\n";
                }
            }
        }
    file.close();
}

void datos_paciente (paciente x [100] [100], int f, int c){

  cout << " " << endl;
  cout << "El paciente ha sido encontrado:" << endl;
  cout << "El nombre del paciente es: " << x[f-1][c-1].nombre << endl;
  cout << "La edad del paciente es: " << x[f-1][c-1].edad << endl;
  cout << "El DNI del paciente es: " << x[f-1][c-1].DNI << endl;
  cout << "La cantidad de dias internado que tiene el paciente es: " << x[f-1][c-1].dias << endl;
}

void pacientes_adyacentes_infectados(paciente v[100][100],int f,int c,int i,int j){
    int contador=0;
    fore(a,(i-2),(i+1)){
        fore(b,(j-2),(j+2)){
            if(chequear_limites(f,c,(a+1),(b+1))){
                contador=contador+1;
                if(a==(i-1)&&b==(j-1)){
                     contador=contador-1;
                }
            }
        }
    }
    ofstream file;
    file.open("pacientes_adyacentes_posiblemente_infectados.txt");
    file <<"La cantidad de pacientes alrededor de "<<v[i-1][j-1].nombre<<" son: "<<contador<<"\n";
    fore(a,(i-2),(i+1)){
        fore(b,(j-2),(j+2)){
            if(chequear_limites(f,c,(a+1),(b+1))){
                contador=contador+1;
                if(a==(i-1)&&b==(j-1)){
                }else{
                file <<v[a][b].nombre<< "\n";
                }
            }
        }
    }
    file.close();
}

void menu(){
    cout<<"MENU DEL SISTEMA"<<endl;
    cout<<"seleccione una opcion"<<endl;
    cout<<""<<endl;
    cout<<"1. SABER EL PROMEDIO DE EDADES DE LA HABITACION"<<endl;
    cout<<"2. GENERAR ARCHIVO CON PACIENTES CON MAS DE 5 DIAS INTERNADOS"<<endl;
    cout<<"3. GENERAR ARCHIVO CON PACIENTES MAYORES A LA EDAD PROMEDIO"<<endl;
    cout<<"4. BUSCAR DATOS DE UN PACIENTE"<<endl;
    cout<<"5. CALCULAR LOS POSIBLES PACIENTES INFECTADOS ADYACENTES A CIERTO PACIENTE"<<endl;
    cout<<"6. SALIR DEL MENU - FINALIZAR"<<endl;
    cout<<""<<endl;
}

int main() {

    int filas,columnas,promedio_edades,band=0,respuesta,fil,col,banderita=0;
    string fila, columna;
    paciente A[100][100];
    band=0;
    while(band==0){
        cout << "Introducir la cantidad de filas de camas que tiene la habitacion: ";
        cin >> fila;
        if(validar(fila)&&stoi(fila)>0){
            filas=stoi(fila);
            band=1;
        }else{
            cout<<"El valor ingresado es incorrecto, por favor, intente nuevamente con un valor correcto."<<endl;
        }
    }
    band=0;
    while(band==0){
        cout << "Introducir la cantidad de filas de camas que tiene la habitacion: ";
        cin >> columna;
        if(validar(columna)&&stoi(columna)>0){
            columnas=stoi(columna);
            band=1;
        }else{
            cout<<"El valor ingresado es incorrecto, por favor, intente nuevamente con un valor correcto."<<endl;
        }
    }
    band=0;
    fore(i,0,filas){
        fore(j,0,columnas){
            while(band==0){
                cout << "Introducir la edad del paciente en la camilla de la fila "<<i+1<<" columna "<<j+1<<": ";
                cin >> A[i][j].edad;
                if(validar(A[i][j].edad)){
                    band=1;
                }else{
                    cout<<"El valor ingresado es incorrecto, por favor, intente nuevamente con un valor correcto."<<endl;
                }
            }
            band=0;
            cin.ignore();
            cout << "Introducir el nombre del paciente en la camilla de la fila "<<i+1<<" columna "<<j+1<<": ";
            cin.getline(A[i][j].nombre,50,'\n');
            while(band==0){
                cout << "Introducir el DNI de " << A[i][j].nombre << ": ";
                cin >> A[i][j].DNI;
                if(validar(A[i][j].DNI)){
                    band=1;
                }else{
                    cout<<"El valor ingresado es incorrecto, por favor, intente nuevamente con un valor correcto."<<endl;
                }
            }
            band=0;
            while(band==0){
                cout << "Introducir la cantidad de dias que lleva internado el paciente " << A[i][j].nombre << ": ";
                cin >> A[i][j].dias;
                if(validar(A[i][j].dias)){
                    band=1;
                }else{
                    cout<<"El valor ingresado es incorrecto, por favor, intente nuevamente con un valor correcto."<<endl;
                }
            }
            band=0;
        }
    }
    while(band==0){
        cout<<""<<endl;
        menu();
        cin>>respuesta;
        switch(respuesta){
            case 1:
                promedio_edades=promedio(A,filas,columnas);
                cout<<"El promedio de edades es: "<<promedio_edades<<endl;
                break;
            case 2:
                mas_de_cinco_dias(A,filas,columnas);
                cout<<""<<endl;
                break;
            case 3:
                mayores_al_promedio(A,filas,columnas,promedio_edades);
                cout<<""<<endl;
                break;
            case 4:
              while (banderita==0){
                cout << "Introducir la coordenada de la posicion fila: ";
                cin >> fil;
                cout << "Introducir la coordenada de la posicion columna: ";
                cin >> col;

                if (chequear_limites (filas, columnas, fil,col)){
                  datos_paciente(A, fil, col);
                  banderita=1;
                }else {
                  cout << "Los datos ingresados son incorrectos, por favor introducir datos reales." << endl;
                }
              }
              banderita=0;
              cout << " " << endl;
                break;

            case 5:
                while(banderita==0){
                    cout<<"Introducir la coordenada de la posicion fila: ";
                    cin>>fil;
                    cout<<"Introducir la coordenada de la posicion columna: ";
                    cin>>col;
                    if(chequear_limites (filas,columnas,fil,col)){
                        pacientes_adyacentes_infectados(A,filas,columnas,fil,col);
                        banderita=1;
                    }else{
                        cout<<"Los datos ingresados son incorrectos, por favor introducir datos reales"<<endl;
                    }
                }
                banderita=0;
                cout<<""<<endl;
                break;
            case 6:
                band=1;
                cout<<"Gracias por utilizar los servicios Velasquez-Rivarola."<<endl;
                cout<<""<<endl;
                break;
            default:
                cout<<"El valor introducido es incorrecto, por favor intentelo nuevamente introduciendo valores del 1 al 6"<<endl;
        }
    }
}
