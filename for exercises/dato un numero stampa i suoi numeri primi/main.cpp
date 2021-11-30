#include <iostream>
using namespace std;

int main()
{
    int n;
    int i;
    int j;
    int conta_num_primi;

    cout << "inseriisci un numero: ";
    cin >> n;

    for (i = 2; i <= n; i++)
    {

        conta_num_primi = 0;

        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                conta_num_primi++;
            }
        }

        if (conta_num_primi == 2)
        {
            cout << i << endl;
        }
    }
    
    return 0;
}
