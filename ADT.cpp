#include <iostream>

using namespace std;

class Figura{
    public:
        int b, a, p, ar;
};

class Rectangulo: public Figura{
    public:
        void printB(){
            cout<<b<<endl;
        }
        void printA(){
            cout<<a<<endl;
        }
        void printP(){
            p = (b*2)+(a*2);
            cout<<p<<endl;
        }
        void printAr(){
            ar = b*a;
            cout<<ar<<endl;
        }
};

int main(){
    Rectangulo r;
    r.b = 4;
    r.printB();
    r.a = 2;
    r.printA();
    r.printP();
    r.printAr();
    return 0;
}