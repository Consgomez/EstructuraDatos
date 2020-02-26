#include <iostream>

using namespace std;

int main(){
    int a[]={10,20,30,40,50};
    int *b=a;
    
    int c=*b; //va a imprimir el valor de b=10
    cout<<c<<endl;
    c = (*b+1); //va a imprimir el valor de b+1=11
    cout<<c<<endl;
    c = (*b+2); //va a imprimir el valor de b+2=12
    cout<<c<<endl;
    c = (*b)+2; //va a imprimir el valor de b+2=12
    //(*b+1) --> primero les estas pidiendo el valor de b y luego le estas agregando uno
    cout<<c<<endl;
    b++; //avanza un lugar en la memoria
    c = *(b+1); //se mueve uno mas en la memoria = 30
    //*(b+1) --> estas avanzando uno y luego estas pidiendo el valor de b
    cout<<c<<endl;
    c = (*b); //imprime 20
    cout<<c<<endl;
    c = (*b++); //imprime el valor de b=20 y se mueve uno en la memoria
    cout<<c<<endl;
    c = (*b); //imprime el valor de b=30
    cout<<c<<endl;
    c = (*++b); //avanza uno en la memoria e imprime el valor de b=40
    cout<<c<<endl;
    c = (*b); //imprime el valor de b=40
    cout<<c<<endl;
    c = (*b+1)+1; //suma 1 al valor de b y le suma 1 al valor de b=42
    cout<<c<<endl;
    c = *(b+1)+1; //avanza 1 lugar y suma 1 al valor de b=51
    cout<<c<<endl;

    //b++ se cambia de lugar el apuntador
    //b+1 se queda en el mismo lugar y solo aumenta uno
    return 0;
}
