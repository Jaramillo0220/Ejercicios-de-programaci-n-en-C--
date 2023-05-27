#include <iostream>
using namespace std;
int a[3][3][3], i, j, k, y, suma = 0, cont = 0;
int main(int argc, char *argv[])
{
    for (y = 0; y < 4; y++)
    {
        for (i = 0; i < 3; i++)
        {
            cout << "\n\nTabla:" << i + 1 << "\n";
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 2; k++)
                {
                    cont = cont + 1;
                    if (cont == 13)
                    {
                        cont = 1;
                    }
                    a[i][k][j] = cont;
                    cout << a[i][k][j];
                    suma = suma + a[i][k][j];
                }
            }
        }
    }
    cout << "\n";
    cout << "\n";
    for (y = 0; y < 4; y++)
    {
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 2; k++)
                {
                    cout << a[i][k][j] << " ";
                }
                cout << "\n";
            }
            cout << "\n";
        }
    }
    cout << "\n\nEl codigo de la empresa es: " << suma;
    return 0;
}