#include <iostream>
#include <time.h>
using namespace std;
int n, a, x;
int factorial()
{
	int fact = 1, cont = 0;
	cout << "Int. el numero a calcular ";
	cin >> n;
	while (cont < n)
	{
		cont = cont + 1;
		fact = fact * cont;
	}
	return fact;
}
int sumaaco()
{
	int suma = 0, cont = 0, i;
	cout << "Int. el numero a calcular ";
	cin >> n;
	for (i = n; i > 0; i--)
	{
		cont += 1;
		suma = suma + cont;
	}
	return suma;
}
int sumaacomulada()
{
	int i, suma, acomulada;
	for (i = 0; 5050 > i; i++)
	{
		suma = suma + 1;
		n = n - suma;
	}
	cout << "Int. el numero a calcular ";
	cin >> n;
	cout << "El total de sumas fueron: " << suma;
	return acomulada;
}
int trian()
{
	int cont = 0, cont2 = 0, angulo;
	cout << "Int. el numero a calcular ";
	cin >> n;
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
	return 0;
}
int numerosale()
{
	int kk[50], i, a, torios;
	srand(time(NULL));
	for (i = 0; 50 > i; i++)
	{
		kk[i] = rand() % (101);
	}
	for (i = 0; 50 > i; i++)
	{
		cout << "\n"
			 << kk[i];
	}
	return torios;
}
int main(int argc, char *argv[])
{
	cout << "----Menu de opciones----";
	cout << "\n1. La suma acomulada ";
	cout << "\n2. El factorial es ";
	cout << "\n3. El resultado de la suma acomulada de 5050 ";
	cout << "\n4. El triangulo de asteriscos ";
	cout << "\n5. 50 numeros aleatorios son";
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "\nLa suma acomulada de : " << n << " es: " << sumaaco();
		break;
	case 2:
		cout << "\nEl factorial de: " << n << " es: " << factorial();
		break;
	case 3:
		cout << "\nLa suma acomulada de 5050 es: " << sumaacomulada();
		break;
	case 4:
		cout << "\nEste es el triangulo de asteriscos : \n"
			 << trian();
		break;
	case 5:
		cout << "\nLos 50 numeros aletorios del 1 al 100 son : " << numerosale();
		break;
	default:
		break;
	}
	return 0;
}
