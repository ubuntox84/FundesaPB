#include <iostream>
#include <vector>
using namespace std;
struct persona{
    string name;
    int old;
    float tall;
};
persona llenar(){
    persona p;
    cout<<"Ing nombre: "<<endl;
    cin>>p.name;
    cout<<"Ing edad: "<<endl;
    cin>>p.old;
    cout<<"Ing altura"<<endl;
    cin>>p.tall;
    return p;
}
int main() {
    vector<persona> lista;
    int edad;
    lista.push_back(llenar());
    lista.push_back(llenar());
    lista.push_back(llenar());
    lista.push_back(llenar());
    cout<<"Lista de personas"<<endl;
    for(const auto& persona:lista){
        cout<<persona.name<<"\t"<<persona.old<<"\t"<<persona.tall<<endl;
    }
    cout<<"ingresa la edad a selecccionar: ";
    cin>>edad;
    for(const auto& persona:lista){
        if(persona.old>edad){
            cout<<persona.name<<"\t"<<persona.old<<"\t"<<persona.tall<<endl;
        }        
    }
}