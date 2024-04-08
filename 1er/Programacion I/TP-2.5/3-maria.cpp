/*
Desarrollar un programa que solicite los nombres y edades de un grupo de n
personas. Luego, implementar una función que busque y devuelva la edad de la
persona llamada 'Maria'. En caso de que no se encuentre a ninguna persona con
ese nombre, el programa deberá indicar que no se encontró a dicha persona.
Supongamos que el grupo tiene 10 personas..
*/

#include <iostream>
using namespace std;

void buscarMaria(int edades[], string nombres[]){
    int flg=0;
    for(int i = 0; i < 10; i++){
        if(nombres[i] == "Maria"){
            cout<<"La edad de Maria es: "<<edades[i]<<endl;
            flg=1;
        }
    }
    cout<<"---------------------------------"<<endl;
    if(flg==0){
        cout<<"No se encontro a ninguna persona llamada Maria"<<endl;
    }

}

int main(){
    int edades[10];
    string nombres[10];
    for(int i=0;i<10;i++){
        cout<<"Ingrese el nombre de la persona "<<i+1<<endl;
        cin>>nombres[i];
        cout<<"Ingrese la edad de la persona "<<i+1<<endl;
        cin>>edades[i];
    }
buscarMaria(edades,nombres);
return 0;
}