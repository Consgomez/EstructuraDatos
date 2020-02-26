#include <iostream>
#include <string>
#include <time.h>
using namespace std;

class Clasificador{
    public:
        int cantidadEjemplos, etiqueta;
        double datos[10];
        bool ensamble;
        void cargarDatos(string nombre){
            int num;
            srand(time(NULL));
            num=rand();
            for(int i=0; i<=10; i++){
                datos[i]=1+rand()%(100);
                cantidadEjemplos = i;
            }
            etiqueta=1+rand()%(10);
            cout<<cantidadEjemplos<<" Datos Cargados"<<endl;
        }
        void virtual entrenar(){

        }
        double virtual clasificar(double lista[]){
            return 0.753;
        }
};

class BayesIngenuo: public Clasificador{
    public:
        double peso[10];
        double alpha;
        void entrenar(){
            cout<<"Modelo Entrenado"<<endl;
        }
        double clasificar(double peso[]){
            return 0.5;
        }
};

int main(){
    double lista[5]={2.74, 3.42, 9.43, 3.13, 2.00};
    BayesIngenuo prueba;
    prueba.cargarDatos("Hola");
    prueba.entrenar();
    cout<<prueba.clasificar(lista)<<endl;
    return 0;
}
