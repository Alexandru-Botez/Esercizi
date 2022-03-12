#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    char scelta;
    char listaLibri[15][100];
    float prezzoLibri[15];
    int nLibri = 0;
    int i = 0, temp = 0, j = 0;
    float max = 0;
    char lettera;
    bool uguale = false;

    do {

        // chiedo la scelta
        cout << "****************** MENU ******************" << endl;
        cout << "A : Inserire un nuovo libro" << endl;
        cout << "B : Stampa tutti i libri e il loro prezzo" << endl;
        cout << "C : Stampa il titolo del libro che costa di piu" << endl;
        cout << "D : Stampa titolo e costo di tutti i libri il cui titolo iniza con una lettera scelta" << endl;
        cin >> scelta;

        system("CLS");

        switch (scelta) {
            case 'A':
            case 'a':

                cout << "inserisci un nuovo libro: ";
                cin >> listaLibri[nLibri];
                cout << "inserisci il suo prezzo: ";
                cin >> prezzoLibri[nLibri];

                nLibri++;
                break;
            case 'B':
            case 'b':

                for (i = 0; i < nLibri; i++)
                {
                    cout << listaLibri[i] << ": " << prezzoLibri[i] << " euro" << endl;
                }

                cout << endl;

                break;
            case 'C':
            case 'c':

                for (i = 0; i < nLibri; i++)
                {
                    if (max < prezzoLibri[i])
                    {
                        max = prezzoLibri[i];
                        temp = i;
                    }
                }

                cout << "il libro che costa di piu e " << listaLibri[temp] << endl;

                break;
            case 'D':
            case 'd':
                cout << "scegli la lettera: ";
                cin >> lettera;

                for (i = 0; i < nLibri; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        if (listaLibri[i][j] == lettera)
                        {
                            uguale = true;
                        }
                        if (uguale == true)
                        {
                            cout << listaLibri[i] << ": " << prezzoLibri[i] << " euro" << endl;
                        }
                    }
                }

                break;
            case 'E':
                    cout << "inserisci un nuovo libro";
                    cin >> listaLibri[nLibri];

                    cout << "inserisci il costo";
                    cin >> prezzoLibri[nLibri];
                    nLibri++;


                    
                break;
            case 'F':
            case 'f':

                break;
            case 'G':
            case 'g':

                break;
            case 'H':
            case 'h':

                break;
            case 'I':
            case 'i':

                break;
            case 'X':
            case 'x':
                cout << "sto chiudendo il programma...";
                break;
            default:
                cout << "ERRORE! inserisci uno delle scelte" << endl;
                break;
        }
    

    } while (scelta !='X' && scelta != 'x');
}
