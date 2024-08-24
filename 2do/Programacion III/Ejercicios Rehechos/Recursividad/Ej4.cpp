#include <iostream>
#include <vector>
using namespace std;

int encontrarMayor(const vector<int>& vec, int n){
    if(n==1){
        return vec[0];
    }
    int maxAnterior = encontrarMayor(vec,n-1);
    if(vec[n-1]>maxAnterior){
        return vec[n-1];
    }else{
        return maxAnterior;
    }
}

int main(){
    int n;
    cout << "ingrese la cantidad de elementos del vector: "; cin>>n;
    vector<int> vec(n);
    for(int i=0; i<n; i++){
        cout << "Ingrese el elemento " << i+1 << ": "; cin >> vec[i];
    }
    cout << "El mayor elemento del vector es: " << encontrarMayor(vec, n) << endl;
}