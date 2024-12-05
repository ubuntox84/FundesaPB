#include<iostream>
#include<string>
using namespace std;
class animal{
    private:
    string name;
    public:
    animal(string n):name(n){}
    void setname(string n){
        this->name=n;
    }
    string getname(){
        return name;
    }
};
class perro:public animal{
    private:
    string raza;
    public:
    perro(string n, string r):raza(r),animal(n){}
    void montrar(){
        cout<<"Nombre "<<getname()<<" Raza: "<<raza;
    }
};
int main(){
    perro p1("Dukesa","Coker");
    p1.montrar();
    return 0;
}