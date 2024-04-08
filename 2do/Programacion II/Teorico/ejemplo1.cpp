#include <iostream>
using namespace std;

int main(){
    int x,y,*p,*q;
    p=&x;
    *p=5;
    q=&y;
    *q=23;
    cout << *p << "  " << *q << endl;
    q=p;
    *p = 35;
    cout << *p << "  " << *q << endl;   
    q=NULL;
    cout << x <<"  "<< y << endl;
    return 0;
}