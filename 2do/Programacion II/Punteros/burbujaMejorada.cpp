#include<iostream>
using namespace std;

int main(){
    int A[]={1,9,80,-7,4},i,j,aux;
    bool bandera=0;

    while(bandera==0){
        bandera=1;
        for(j=0;j<4;j++){
                if(A[j]>A[j+1]){
                aux = A[j];
                A[j]=A[j+1];
                A[j+1]=aux;
                bandera=0;
            }
        }
    }
    for(i=0;i<5;i++){
        cout<<A[i]<<endl;
    }
    return 0;
}