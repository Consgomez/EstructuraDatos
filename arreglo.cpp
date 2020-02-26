#include <iostream>

using namespace std;

int main(){
    while(1){
        int *arreglo = new int[3];
        int a=5;
        //*a; //dame el contenido en la direccion de a
        //&a; //dama la dirección de la variable a 
        arreglo[0] = 10;
        arreglo[1] = 20;
        arreglo[2] = 30;
        cout<<arreglo[2]<<endl;
        delete[] arreglo; //para que no se siga usando en la memoria

        return 0;
    }
}