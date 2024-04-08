#include<iostream>
using namespace std;

int main(){
    int A[]={1,9,80,-7,4},i,j,aux;

    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            if(A[j]>A[j+1]){
                aux = A[j];
                A[j]=A[j+1];
                A[j+1]=aux;
            }
        }
    }

    for(i=0;i<5;i++){
        cout<<A[i]<<endl;
    }
return 0;
}