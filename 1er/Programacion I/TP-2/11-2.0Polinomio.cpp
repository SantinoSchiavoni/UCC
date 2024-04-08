#include <iostream>
#include <cmath>
using namespace std;


int FuncionEvaluarPolinomio(int a, int x, int grado){
    int i, j, termino, coeficientes, resultado=0;
   for (i= grado; i >=0; i--){
    termino=1;
    for (j= 0; j < grado-i; j++){
        termino*=x;
    }
    resultado+=coeficientes*(grado-i)*termino;
   }
   return resultado;
}

int main(){
    int a[100],i,x,n,resultado=0;

    cout<<"Ingrese el grado N del polinomio"<<endl;
    cin>>n;

    for (i=0; i<=n; i++){
        cout<<"Ingrese el valor de los coeficientes o terminos"<<endl;
        cin>>a[i];
    }

    cout<<"Ingrese el valor de x para evaluar en el polinomio: "<<endl;
    cin>>x;
    for (i=0; i <n; i++){
        resultado=resultado+(a[i]*(pow(x,n)));
        n--;
    }
    resultado=FuncionEvaluarPolinomio(a[i],x,n);
    cout<<"El resultado de evaluar el polinomio en x = "<< x <<" es: "<<resultado<<endl;

    
}