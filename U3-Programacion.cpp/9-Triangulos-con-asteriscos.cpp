#include <iostream>
using namespace std;
int cont = 0, cont2 = 0, n;
char resp;
int main(int argc, char *argv[])
{
	do
	{
		cout << "\n--Te dare un triangulo con asteriscos del menor al mayor--";
		cout << "\nDe cuantos numeros quieres el triangulo? ";
		cin >> n;
		cout << "\n";
		while (cont < n)
		{
			cont = cont + 1;
			cont2 = 0;
			while (cont2 < cont)
			{
				cont2 = cont2 + 1;
				cout << "*";
			}
			cout << "\n";
		}
		cout << "\n\nQuieres volver a ingresar otro numero? (y/n) ";
		cin >> resp;
	} while (resp == 'y' || resp == 'Y');
	return 0;
}
