#include<iostream>
#include<string>
using namespace std;
class persona{
    private:
    string nombre;
    int edad;
    int codigo;
    public: 
    persona();
    persona(string);
    persona(string, int);
    persona(string, int, int);
    void mostrar(){
        cout<<"Nombre: "<<nombre<<" Edad: "<<edad<<" Codigo: "<<codigo<<endl;}
};
    persona::persona():nombre(""), edad(0), codigo(0){}
    persona::persona(string name):nombre(name), edad(0), codigo(0){}
    persona::persona(string name, int old):nombre(name),edad(old), codigo(0){}
    persona::persona(string name, int old, int code):nombre(name),edad(old),codigo(code){}

    
int main(){
    persona p1("juan", 17, 103);
    p1.mostrar();
    persona p2("juan", 17);
    p2.mostrar();
    persona p3("pedro");
    p3.mostrar();
    persona p4;
    p4.mostrar();
}