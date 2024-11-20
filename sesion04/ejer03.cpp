#include <iostream>
#include <vector>
using namespace std;
struct notas{
    int n1;
    int n2;
    int n3;
};
struct alumnos{
    string name;
    notas n;
};
int main(){
    alumnos p={"juan",{5,3,4}};
    cout<<p.name<<" "<<p.n.n1<<" "<<p.n.n2<<" "<<p.n.n3;
}