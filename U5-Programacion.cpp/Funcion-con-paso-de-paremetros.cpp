#include <iostream>
using namespace std;
int op, n;
char resp;
int factorial(int n)
{
    int cont = 0, fact = 1;
    while (cont < n)
    {
        cont = cont + 1;
        fact = fact * cont;
    }
    return fact;
}
int suma(int n)
{
    int cont = 0, suma = 0;
    while (cont < n)
    {
        cont = cont + 1;
        suma = suma + cont;
    }
    return suma;
}
int main(int argc, char *argv[])
{
    do
    {
        cout << "1.- Factorial \n";
        cout << "2.- Suma acomulada \n";
        cout << "Que opcion deseas? ";
        cin >> op;
        switch (op)
        {
        case 1:
            cout << "Introduce el numero a calcular: ";
            cin >> n;
            cout << "El factorial de " << n << " es: " << factorial(n); 
            break;
        case 2:
            cout << "Introduce el numero a calcular: ";
            cin >> n;
            
            cout << "La suma acomulada de " << n << " es: " << suma(n);
            break;
        default:
            cout << "No existe la opcion. Introduce una opcion valida.";
            break;
        }
        cout << "\nFin del programa \n";
        cout << "Deseas repetir el programa? (s/n) ";
        cin >> resp;
    } while (resp == 's' || resp == 'S');
    return 0;
}