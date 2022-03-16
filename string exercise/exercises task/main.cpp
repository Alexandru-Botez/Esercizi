#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    char scelta;
    char listaLibri[15][50];
    float prezzoLibri[15];
    int nLibri = 0;
    int i = 0, temp = 0, j = 0;
    float max = 0;
    char lettera;
    bool uguale;
    ofstream fout("lista.txt");
    ifstream fin("listalibri.txt");
    int nLibriFile;


    do {

        // chiedo la scelta
        cout << "***************************** MENU *************************" << endl;
        cout << "A : Inserire un nuovo libro" << endl;
        cout << "B : Stampa tutti i libri e il loro prezzo" << endl;
        cout << "C : Stampa il titolo del libro che costa di piu" << endl;
        cout << "D : Stampa titolo e costo di tutti i libri il cui titolo iniza con una lettera scelta" << endl;
        cout << "E : Inserisce un nuovo libro come primo della lista" << endl;
        cout << "F : Stampa su un file i titoli e il costo di tutti i libri in questo formato" << endl;
        cout << "G : Legge dal file  allegato e li aggiunge agli array" << endl;
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
                uguale = false;

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
            // Inserisco un nuovo libro nella lista
            cout << "inserisci un nuovo libro";
            cin >> listaLibri[nLibri];
            // inserisco il suo costo e aumento la quantita dei libri
            cout << "inserisci il costo";
            cin >> prezzoLibri[nLibri];
            nLibri++;


            for (i = nLibri; i >= 0; i--)
            {
                for (j = 0; j < 50; j++)
                {
                    listaLibri[i + 1][j] = listaLibri[i][j];
                }
                prezzoLibri[i + 1] = prezzoLibri[i];
            }

            prezzoLibri[0] = prezzoLibri[nLibri];

            for (i = 0; i < 50; i++)
            {
                listaLibri[0][i] = listaLibri[nLibri][i];
            }



            break;
        case 'F':
        case 'f':
            
            for (i = 0; i < nLibri; i++)
            {
                fout << "il libro " << listaLibri[i] << " costa " << prezzoLibri[i] << " euro" << endl;
            }

            fout.close();

            break;
            

        case 'G':
        case 'g':

            fin >> nLibriFile;

            for (i = 0; i <= nLibriFile; i++)
            {
                fin >> listaLibri[nLibri + i];
                fin >> prezzoLibri[nLibri + i];

            }
            fin.close();

            nLibri = nLibri + nLibriFile;

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


    } while (scelta != 'X' && scelta != 'x');
}
