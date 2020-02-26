#include <iostream>
using namespace std; //std es una clase en iostream y tiene metodo cout

class Ejemplo{
    public: 
        int x=1;
        void virtual printX()=0; 
    protected:
        int y=2;

    private:
        int z=3;
    

};

class Hijo : public Ejemplo{ // clase hijo que herada de ejemplo
    public:
        void printX(){
            cout<<x<<endl;
        } 
        void printY(){
            cout<<y<<endl;
        }
        
};


struct point{ 
    int x;
    int y;
};


int main(){
    Hijo h;//crea una instancia de la clase hijo
    h.x = 6; //accede a la variable de la clase h
    h.printX();
    h.printY();
    return 0;
}