#include <iostream>
#include <string>
using namespace std;

int main()
{
    string usuario = "admin";
    string contrasenia = "1234";
    string inputuser, inputpass;
    int cont = 0;

    do
    {
        cout << "ingrese user: \t";
        cin >> inputuser;
        cout << "ingrese password: \t";
        cin >> inputpass;
        if (inputuser == usuario)
        {
            if (inputpass == contrasenia)
            {
                cout << "Bienvenido " << usuario << "!!!!";
            }
            else
            {
                cout << "ingreso mal su contrasenia!!!" << endl;
                cont++;
            }
        }
        else
        {
            cout << "ingreso mal su usuario!!!" << endl;
            cont++;
        }
        if (cont == 3)
        {
            cout << "cerrando programa de interbank!!" << endl;
        }
    } while (cont < 3);
    return 0;
}