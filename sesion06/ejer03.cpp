// se requiere crear los siguientes objetos:
//persona();
//persona("Juan");
//persona ("Juan",17);
#include<iostream>
using namespace std;
class persona{
    private:
    string name;
    int old;
    public:
    persona(){}
    persona(string){}
    persona(string, int){}
};
persona::persona(){}
persona::persona(string n):name(n){}
persona::persona(string n, int o):name(n),old(o){}
int main(){
    persona p1();
    persona p2("Juan");
    persona p3("Juan", 17);
    return 0;
}