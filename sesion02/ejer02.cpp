#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int NOTAS[5];
    srand(time(0));
    int SUMA = 0;
    for (int i = 0; i < 5; i++)
    {
        NOTAS[i] = rand() % 20 + 1;
        cout << NOTAS[i] << " ";
        SUMA = SUMA + NOTAS[i];
    }       

    float promedio = float(SUMA) / 5.0;

    cout << "El promedio es igual a: " << promedio << endl;
    if (promedio < 11)
        cout << "Su promedio es considerado: Insuficiente";
    if ((promedio >= 11) && (promedio < 14))
        cout << "Su promedio es considerado: Suficiente";
    if ((promedio >= 14) && (promedio < 17))
        cout << "Su promedio es considerado: Bueno";
    if ((promedio >= 17) && (promedio <= 20))
        cout << "Su promedio es considerado: Muy bueno";
}