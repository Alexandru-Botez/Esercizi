#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int vettore[] = { 0,0,0,0,0,0 };
    srand(time(0));
    int n;
    int i;
    int r = 1;
    
    cout << "inserisci il numero di lanci: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        vettore[rand() % 6]++;
    }
    for (i = 0; i < 6; i++)
    {
        cout << r << " e' uscito: " << vettore[i] << " volte" << endl;
        r++;
    }
}
