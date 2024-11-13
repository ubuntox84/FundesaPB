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
    int matriz[F][C];
    int vect[F]={0,0,0,0};
    srand(time(NULL));
    for (int f = 0; f < F; f++)
        for (int c = 0; c < C; c++){
            matriz[f][c] =aletorio(0, 100);
            vect[f]+=matriz[f][c];
        }

    for (int f = 0; f < F; f++)
    {
        for (int c = 0; c < C; c++)
            cout << matriz[f][c] << " ";
        cout << endl;
    }
    cout<<endl;
    for(int x:vect){
        cout<<x<<" ";
    }
}