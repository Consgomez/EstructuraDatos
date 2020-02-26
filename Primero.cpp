#include<iostream>
#include<cstring>

using namespace std;

int main(){
    int a = 0;
    float b = 0.0;
    double c = 0.0;
    char d = 'c';
    string e = "palabra";
    bool f = false;

    /*cout<<"un entero mide "<< sizeof(a)<<endl;
    cout<<"un float mide "<< sizeof(b)<<endl;
    cout<<"un double mide "<< sizeof(c)<<endl;
    cout<<"un char mide "<< sizeof(d)<<endl;
    cout<<"un string mide "<< sizeof(e)<<endl;
    cout<<"un bool mide "<< sizeof(f)<<endl;*/

    string g = "perro ";
    string h = "gato";
    string i = g+h;

    cout<<i<<endl;

    return 0;
}