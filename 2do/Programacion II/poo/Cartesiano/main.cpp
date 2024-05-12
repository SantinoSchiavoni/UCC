#include<iostream>
#include<cmath>
#include "cartesiano.h"
using namespace std;

int main(){
    Punto p1(1,2);
    Punto p2(3,4);
    Linea l1(1,2,3,4);
    
    p1.mostrar();
    p2.mostrar();
    l1.mostrarLinea();
}