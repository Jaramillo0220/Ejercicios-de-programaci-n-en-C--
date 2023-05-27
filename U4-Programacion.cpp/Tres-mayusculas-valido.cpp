#include <iostream>
using namespace std;
int sum = 0, x;
char frase[30], resp;
int main(int argc, char *argv[])
{
    do
    {
        cout << "\n\nIntroduce la frase: \n";
        cin >> frase;
        sum = 0;
        for (x = 0; x < 30; x++)
        {
            switch (frase[x])
            {
            case 'A':
                sum++;
                break;
            case 'E':
                sum++;
                break;
            case 'I':
                sum++;
                break;
            case 'O':
                sum++;
                break;
            case 'U':
                sum++;
                break;
            default:
                break;
            }
        }
        if (sum >= 3)
        {
            cout << "\nBienvenido!!";
        }
        else
        {
            cout << "\nIngreso incorrecto";
        }
        cout << "\n\nQuieres poner alguna otra palabra? (y/n)";
        cin >> resp;
    } while (resp == 'Y' || resp == 'y');
    return 0;
}