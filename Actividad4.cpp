#include <iostream>

using namespace std;

//Obtener los números de la serie de fibonacci
void fibonacci(int ant, int numero, int indice, int max){
    if(indice == max){
        cout<<numero<<endl;
    }else{
        fibonacci(numero, numero+ant, ++indice, max);
    }
}

//Multiplicación de 2 números con sumas
void multiplicacion(int n1, int resultado, int indice, int max){
    if(indice == max){
        cout<<resultado<<endl;
    }else{
        multiplicacion(resultado, resultado+n1, ++indice, max);
    }
}

//Potencia de 2 números con multiplicaciones
void potencia(int n1, int resultado, int indice, int max){
    if(indice == max){
        cout<<resultado<<endl;
    }else{
        potencia(resultado, resultado*n1, ++indice, max);
    }
}

int main(){
    int ant = 0;
    int num = 1;
    int indice = 1;
    int n1 = 2;
    fibonacci(ant, ant+num, indice, 4);
    multiplicacion(2, 2, indice, 3);
    potencia(3, 3, indice, 2);

    return 0;
}