#include <iostream>
using namespace std;

void procedimiento(int m[4][4]){
    int suma_Tsup=0, suma_Tinf=0, suma_Dppal=0, suma_DNppal=0, multiplicacion=1;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i>j){
                suma_Tinf+=m[i][j];
            }
            if(i<j){
                suma_Tsup+=m[i][j];
            }
            if(i==j){
                suma_Dppal+=m[i][j];
                multiplicacion*=m[i][j];
            }
            if(4-1==j+i){
                suma_DNppal+=m[i][j];
                multiplicacion*=m[i][j];
            }

        }
    }

    cout<<"La suma de la Triangular Sup es: "<<suma_Tsup<<endl;
    cout<<"La suma de la Triangular Inf es: "<<suma_Tinf<<endl;
    cout<<"La suma de la Diagonal Ppal es: "<<suma_Dppal<<endl;
    cout<<"La multiplicacion es: "<<multiplicacion<<endl;
}

int main(){
    int matriz[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<"Ingrese el elemento "<<i+1<<" , "<<j+1<<endl;
            cin>>matriz[i][j];
        }
    }
    procedimiento(matriz);
}