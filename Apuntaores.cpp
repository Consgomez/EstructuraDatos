#include <iostream>

using namespace std;

int main(){
    int b=56;
    int *a=&b; //int * es un apuntador a un entero
    cout<<b<<endl; //nos da la variables
    cout<<a<<endl; //nos da la dirección
    cout<<*a<<endl; //nos da el valor

    return 0;
}