/*El programa debe calcular el factorial de un número N que ingrese el usuario.*/

#include <iostream>
using namespace std;

int main (){
float numusuario, multiplicador, summutiplicacion;

cout<< " Ingrese el numero del que desea obtener el factorial"<<endl;
cin>>numusuario;
multiplicador=numusuario-1;
summutiplicacion=numusuario;

while (multiplicador!=0) {
    summutiplicacion= (summutiplicacion*multiplicador);
    multiplicador=multiplicador-1;
}
cout<< "El factorial de: "<<numusuario<< " es: "<<summutiplicacion<<endl;
}