#include <iostream>
using namespace std;

int main()
{
    int numero, divisore, somma;
    float cifra1, cifra2, cifra3, cifra4;

    cout << "Inserisci un numero a 4 cifre da 1000 a 9999: ";
    cin >> numero;

    // esempio numero 1000
    cifra1 = numero % 10; // 0
    divisore = numero / 10; // 100
    cifra2 = divisore % 10; // 0
    divisore = divisore / 10; // 10
    cifra3 = divisore % 10; // 0
    divisore = divisore / 10; // 1
    cifra4 = divisore % 10; // 1
  
    cout << cifra4 << " " << cifra3 << " " << cifra2 << " " << cifra1 << '\n';

}

