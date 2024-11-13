#include <iostream>
using namespace std;
int main() {
    int arr[]={1,2,3,4,5};
    int *p=arr;
    cout<<p<<"  "<<*p<<endl;
    cout<<p+1<<" "<<*p+1<<endl;
    cout<<p+2<<" "<<*p+2<<endl;
    cout<<p+10<<" "<<*p+3<<endl;
}