#include <iostream>
using namespace std;
int main()
{
    int num, somma = 0;
    int round = 0;

    cout << "inserisci un numero: ";
    cin >> num;

    while (num > round)
    {
        if (round % 2 == 0)
        {
            somma = somma + round;
        }

        round++;
    }
    cout << "la somma dei numeri pari e : " << somma;
}
