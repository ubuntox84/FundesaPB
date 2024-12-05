#include<iostream>
using namespace std;
class Persona{
    private:
    int a, b;
    public:
    Persona(int x,int y):a(x),b(y){}
    void mostrar(){
        cout<<a<<" y "<<b;
    }
    int sumar(){
        return (a+b);
    }
    int geta(){
        return a;
    }
    int getb(){
        return b;
    }
    void seta(int x){
        a=x;
    }
    void setb(int y){
        b=y;
    }
};
int main(){
    Persona p1(5,8);
    p1.mostrar();
    cout<<endl<<"La suma es: "<<p1.sumar()<<endl;
    p1.seta(15);
    p1.setb(10);
    //p1.mostrar();
    cout<<p1.geta()<<" y "<<p1.getb();
    cout<<endl<<"La suma es: "<<p1.sumar();
    return 0;
}
