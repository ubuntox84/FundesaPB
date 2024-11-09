#include <iostream>
using namespace std;
int n;
int i;
int main()
{
    cout << "ingrese el tamaño del triangulo" << endl;
    cin >> n;
    for (int j = 0; j < n+j; j++)
    {
        for (i = 0; i < n; i++)
            cout << "*";
        cout << endl;
        n = n - 1;
    }
}