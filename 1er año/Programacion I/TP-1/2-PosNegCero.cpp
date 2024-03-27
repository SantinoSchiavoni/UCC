/*Desarrolle una función que tome como argumento una variable de tipo entero y
retorne la letra P si el valor es positivo, la letra N si el valor es negativo o la letra C si
el valor es cero. Luego, el programa debe imprimir lo retornado por la función.*/

#include<iostream>
using namespace std;

char verificar(int x){
    if(x>0){
        return 'P';
    }
    if(x<0){
        return 'N';
    }
    if(x==0){
       return 'C';
    }
}

int main(){
    
    int num1;

    cout<<"ingrese el numero a verificar"<<endl;
    cin>>num1;

    cout<<"Su numero: "<<num1<<" es: "<<verificar(num1)<<endl;
    return 0;
}
