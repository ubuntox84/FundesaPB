#include <iostream>
#include <cstring> 
 
using namespace std;
union person{
    char name[50];
    int edad;
};
int main(){
    person p1;
     strcpy(p1.name, "Juan");
     cout<<p1.name<<" "<<p1.edad<<endl;
     p1.edad=15;
    cout<<p1.name<<" "<<p1.edad;
}