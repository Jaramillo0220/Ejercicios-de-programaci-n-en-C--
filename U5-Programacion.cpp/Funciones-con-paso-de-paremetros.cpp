#include <iostream>
#include <cstring>
using namespace std;
char resp;
int x, n;
int nmayor(int n)
{
    int a[200], resultado = 0;
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % (100);
        cout << "\n"
             << i + 1 << ".- " << a[i];
        if (a[i] > resultado)
        {
            resultado = a[i];
        }
    }
    cout << "\n\nEl mayor de todos los numeros fue: " << resultado;
    return 0;
}
int multi(int n)
{
    int multipli = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "\n"
             << i + 1 << ".- " << i + 1 << " * " << n << " = " << (i + 1) * n;
    }
    return 0;
}
int aleatorios(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\n"
             << i + 1 << ".- " << rand() % (100);
    }
    return 0;
}
int contrasena(int n)
{
    const char *con = "Hola-mundo";
    char c[100];
    cout << "\nIntroduce la contrasena: ";
    cin >> c;
    if (strcmp(c, con) == 0)
    {
        cout << "Bienvenido! ";
    }
    else
    {
        cout << "Contrasena no valida.";
    }
    return 0;
}
int main(int argc, char *argv[])
{
    do
    {
        cout << "\n1.- Calcular el mayor de 'n' numeros";
        cout << "\n2.- Tabla de multiplicar";
        cout << "\n3.- Cantidad aleatoria de numeros";
        cout << "\n4.- Ingresa la contrasena";
        cout << "\nIngresa una opcion: ";
        cin >> x;
        cout << "\n------------------------------------------------";
        switch (x)
        {
        case 1:
            cout << "\nIntroce la cantidad para generar: ";
            cin >> n;
            nmayor(n);
            break;
        case 2:
            cout << "\nIntroduce el numero a multiplicar en tabla de 10: ";
            cin >> n;
            multi(n);
            break;
        case 3:
            cout << "\nIntroduce la cantidad de numeros aleatorios que deseas generar: ";
            cin >> n;
            aleatorios(n);
            break;
        case 4:
            contrasena(n);
            break;
        default:
            cout << "Esta opcion no existe, ingresa una opcion valida.";
            break;
        }
        cout << "\n\nQuieres volver a repetir el programa? (s/n) ";
        cin >> resp;
    } while (resp == 's' || resp == 'S');
    return 0;
}