#include <iostream>
#include <cstring> 
 
using namespace std;
string fun(string &n){
    n="Adios";
    return " ";
}
int main(){
    string saludo="hola";
    fun(saludo);
    cout<<saludo;
}