#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main (){
    srand(time(0));
    int numeroSecreto=rand()%10+1;
    int numeroUsuario;
    int intento=0;
    do
    {
        cout<<++intento<<endl;
        cout<<"adivina el numero <=100 :";
        cin>>numeroUsuario;
        if (numeroUsuario<numeroSecreto)
            cout<<"el numero es mayor"<<endl;
        else 
            cout<<"el numero es menor:"<<endl;        
    } while (numeroUsuario !=numeroSecreto);
    cout<<"felicidades adivinaste el numero:";
    return 0;
}