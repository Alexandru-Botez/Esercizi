#include <iostream>
using namespace std;

int main ()
{
	int scelta;
	int n, i, j;
	int vettore[1000];
	int somma;
	int esponente;
	
	do 
    {
		cout << "Scegli tra queste funzioni:"<< endl;
		cout <<	"1) Convertitore da numero decimale a binario" << endl;
		cout << "2) Convertitore da numero binario a decimale" << endl;
		cout << "0) Ucire dal programma"<< endl;
		cin >> scelta;
		
		switch (scelta)
		{
			case 1:
				i = 0;
				
				cout << "Inserisci un numero decimale in modo tale da convertirlo in binaro: " << endl;
				cin >> n;
				
				while(n != 0)
				{
					vettore[i] = n % 2;
					n = n / 2;
					i++;
				}
				
				for(j = 1; i - j >= 0; j++)
				{
					cout << vettore[i - j];
				}
				cout << endl << endl;
	
				break;
			case 2:
				
				i = 0;
				
				cout << "Inserisci un numero binario in modo tale da convertirlo in decimale: " << endl;
				cin >> n;
				
				while (n != 0)
				{
					vettore[i] = n % 10;
					n = n / 10;
					i++;
				}
				
				esponente = 1;
				somma = 0;
				
				for(j = 0; j < i; j++)
				{
					somma = somma + vettore[j] * esponente;
					esponente = esponente * 2;
					
				}
				cout << somma;
				cout << endl << endl;
				
				break;
			case 0:
				cout << "Sto chiudendo il programma...";
				break;
			default:
				cout << "ERRORE, numero non valido";
		}
   }while(scelta != 0);
}
