#include <iostream>
#include <vector>
#include <iomanip> 
using namespace std;
struct alumnos{
    string name;
    int grado;
    vector <int> notas;
};
int main(){
    alumnos p1={"juan",5,{11,15,10,16}};
    alumnos p2={"luis",5,{11,10,10,12}};
    alumnos p3={"antonio",5,{12,12,10,9}};
    alumnos p4={"miguel",5,{2,7,10,4}};
    vector <alumnos> lista;
    lista.push_back(p1);
    lista.push_back(p2);
    lista.push_back(p3);
    lista.push_back(p4);
    cout<<"Lista de alumnos: "<<endl;
    for(int i=0; i<lista.size();i++){
        cout<<lista[i].name<<" "<<lista[i].notas[0]<<" "
            <<lista[i].notas[1]<<" "<<lista[i].notas[2]<<" "
            <<lista[i].notas[3]<<endl;
    }
    cout<<"Lista de alumnos aprobados: "<<endl;
    
    for (int i = 0; i < lista.size(); i++)
    {
        int sum=0;
        float prom;
        for (int j = 0; j < lista[i].notas.size(); j++)
        {
            sum+=lista[i].notas[j];
        }
        prom=float(sum)/4;
        if(prom>=10.5){
            cout<<lista[i].name<<" "<<lista[i].notas[0]<<" "
            <<lista[i].notas[1]<<" "<<lista[i].notas[2]<<" "
            <<lista[i].notas[3]<<" Promedio: "<<fixed<<setprecision(0)<<prom<<endl;
        }
    }       

}