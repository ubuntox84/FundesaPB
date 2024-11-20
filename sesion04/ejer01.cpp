#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> lista={7,8,4,6,9,1,3,4,6};
    int valor,num, indice=-1, cont=0;
    /*
    cout<<"ingresa 10 numero:";
    for (int i = 0; i < 10; i++){
        cin>>valor;
        lista.push_back(valor);
    }*/
   cout<<"Vector ingresado!!: \t"<<endl;
   for(int x:lista){
    cout<<x<<" ";
   }
    cout<<"\nQue quiero buscar: ";
    cin>>num;
    for(int x:lista){        
        if(x==num){
            indice=cont;
            break;
        }            
        cont++;
    }
    if(indice>=0){
        cout<<"\nEl indice es: "<<indice;
    }else{
        cout<<"\nel numero no se encuentra!!";
    }
    
    
}