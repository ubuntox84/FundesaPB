#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Digite un numero entero: " << endl;
    cin >> num;

    if (num % 3 == 0 && num % 5 == 0)
        cout << "El numero es divisible entre 3 y 5  " << endl;
    else if (num % 5 == 0)
        cout << "El numero es divisible entre 5 " << endl;
    else if (num % 3 == 0)
        cout << "El numero es divisible entre 3" << endl;
    else
        cout << "El numero NO es divisible entre 3 y 5";
    return 0;
}
