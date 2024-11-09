#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Digite un numero entero: " << endl;
    cin >> num;
    /// (condicion)?verdad:falso
    string res=(num%3==0 && num%5==0)?"si es divisible por 3, 5":
    (num%3==0)?"si es divisible por 3":
    (num%5==0)?"si es divisible por 5":
    "NO es divisible por 3, 5";
    cout<<res;
}