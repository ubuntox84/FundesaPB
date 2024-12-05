#include<iostream>
#include<string>
using namespace std;
class arbol{
    private:
    string *name;
    public:
    arbol(string n):name(new string(n)){
        cout<<"Se creo el objeto\n";
    }
    ~arbol(){ 
        delete name;       
        cout<<"Se elimino el objeto\n";
    }
};
int main(){
    arbol a("Cedro");
    return 0;
}