#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int cont, x, z, a, b = 0, c, resultado;
char resp;
int main(int argc, char *argv[])
{
    do
    {
        srand(time(NULL));
        cout << "--Aprendamos a sumar con los problemas y te dire si estas bien o mal--";
        cout << "\nIngresa el numero de operaciones que quieres realizar: ";
        cin >> a;
        cont = 0;
        b = 0;
        cont = a;
        for (int i = a; i > 0; i--)
        {
            x = rand() % (51);
            z = rand() % (51);
            resultado = (x + z);
            b += 1;
            cout << "\nOperacion " << b << ". Cuanto es " << x << " + " << z << " = ";
            cin >> c;
            if (c == resultado)
            {
                cout << "Correcto!\n";
            }
            else
            {
                cout << "Incorrecto, la respues correcta es: " << resultado << "\n";
                cont -= 1;
            }
        }
        if (cont == a)
        {
            cout << "\nFelicidades! Obtuviste una calificacion perfecta";
        }
        else
        {
            cout << "\n--Tuviste " << cont << " acierto/s de " << a << ". Debemos de seguir practicando";
        }
        cout << "\n";
        cout << "\nDeseas repetirlo? ";
        cin >> resp;
        cout << "\n";
    } while (resp == 's' || resp == 'S');
    return 0;
}