/*El programa debe calcular el factorial de un número N que ingrese el usuario.*/

#include<iostream>
using namespace std;

int main(void){
    int num1,numT;
    int numF=1;
    int i=1;
    cout<<"Ingrese un numero"<<endl;
    cin>>num1;
    for(i=1;(i<num1&);i++){
        numT=num1*i;
        numF=numT*numF*1;
    }
    cout<<num1<<"!= "<<numF<<endl;
    return 0;
}
