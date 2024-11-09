#include <iostream>
#include <cstring>
using namespace std;
int main(){
    string cadena;
    int contVocal;
   cout<<"ingrese la oracion\t";
    getline(cin,cadena);
    for(char letra:cadena){
        letra=tolower(letra);
        if(letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u'){
            contVocal++;
        }
    }
   cout<<"numero total de vocales es :"<<contVocal;

}