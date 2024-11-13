#include <iostream>
#include <ctime>
#include <cstdlib>
#define F 4
#define C 4
using namespace std;
int aletorio(int min, int max){
    return min + rand() % (max - min + 1);;
}
int main()
{
    char matriz[F][C];
    srand(time(NULL));
    for (int f = 0; f < F; f++)
        for (int c = 0; c < C; c++)
            matriz[f][c] = (char)aletorio(0, 100);

    for (int f = 0; f < F; f++)
    {
        for (int c = 0; c < C; c++)
            cout << matriz[f][c] << " ";
        cout << endl;
    }
}