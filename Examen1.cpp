#include <iostream>

using namespace std;

class Sort{
    public:
        int num[10];
        void virtual ordenar(int num[], int size){
            
        }
        void intercambiar(int *arreglo, int primero, int segundo, int &mayor){
            int a = arreglo[primero];
            int b = arreglo[segundo];
            arreglo[primero] = b;
            arreglo[segundo] = a;
            if(a>b){
                if(a>mayor){
                    mayor = a;
                }
            } else if(b>a){
                if(b>mayor){
                    mayor = b;
                }
            } else{
                mayor = mayor;
            }
        }
};

class LuckySort: public Sort{
    public: 
        void ordenar(int *arreglo, int size){
            int a = arreglo[0];
            int b = arreglo[size-1];
            arreglo[size-1] = a;
            arreglo[0] = b;
        }
        
};

void printArray(int a[], int n){
	cout<<"{"<<a[0];
	for(int i=1; i<n; i++){
		cout<<","<<a[i];
	}
	cout<<"}"<<endl;
}

int main(){
	LuckySort L;
	int size=4;
	int *a=new int[size];
	a[0]=4;
	a[1]=3;
	a[2]=2;
	a[3]=1;
	int mayor=0;
	printArray(a, size);
	L.intercambiar(a, 1,2, mayor);
	printArray(a, size);
	L.ordenar(a,size);
	printArray(a, size);
	cout<<mayor<<endl;
	
	return 0;
}