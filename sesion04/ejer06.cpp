#include <iostream>
#include <cstring> 
 
using namespace std;

int func1(int &x){
    x=100;
    return x;
}
void func2(int *x){
    *x=200;
}

int main(){
    int x=50;
    cout<<x<<endl;
    func1(x);
    cout<<x<<endl;
    func2(&x);
    cout<<x<<endl;
}