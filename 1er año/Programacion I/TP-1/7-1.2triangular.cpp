/*Desarrolle un programa que reciba un parámetro de tipo entero y retorne si es o no
triangular. Luego, imprimir la conclusión.
Aclaración:
Un número N es triangular si y sólo si es la suma de los primeros N números
naturales, para cualquier N.
Ejemplo: 10 = 1 + 2 + 3 + 4; N=4.*/

#include <iostream>
using namespace std;

bool triangular(int x){
    int nu=0,i=1;

    while(nu<x){
        nu+=i;
        i++;
    }
return nu==x;
}

int main(){
    int n;
    cout<<"Indique el numero"<<endl;
    cin>>n;

    if(triangular(n)){
        cout <<n<< " es triangular "<<endl;
    }
    else{
        cout <<n<< " no es triangular "<<endl;
    }
    return 0;
}