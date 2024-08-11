#include<iostream>
using namespace std;

int main(){
    int Vec[]={2,4,6,8,10};
    int *pVec;
    pVec=Vec;
    cout<<*(pVec+3)<<endl;
}