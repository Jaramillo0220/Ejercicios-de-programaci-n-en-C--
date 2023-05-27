#include <iostream>
using namespace std;
struct tienda
{
    char nombre[40];
    int edad;
    float sueldo;
    char depto[15];
};
tienda *dato = new tienda[3];
struct nacimiento
{
    int mes;
    int dia;
    int anio;
};
nacimiento *dato2 = new nacimiento[3];
int i;
int main(int argc, char *argv[])
{
    for (i = 0; i < 3; i++)
    {
        cout << "Introduce el nombre: ";
        cin >> dato[i].nombre;
        cout << "Introduce el edad: ";
        cin >> dato[i].edad;
        cout << "Introduce el sueldo: ";
        cin >> dato[i].sueldo;
        cout << "Introduce el depto: ";
        cin >> dato[i].depto;
        cout << "Introduce el mes: ";
        cin >> dato2[i].mes;
        cout << "Introduce el dia: ";
        cin >> dato2[i].dia;
        cout << "Introduce el anio: ";
        cin >> dato2[i].anio;
    }

    for (i = 0; i < 3; i++)
    {
        cout << "nombre: " << dato[i].nombre << "Edad: " << dato[i].edad << "Suledo: " << dato[i].sueldo << "Depto: " << dato[i].depto << "Anio: " << dato2[i].anio << "Mes: " << dato2[i].mes << "Dia: " << dato2[i].dia;
        cout << "\n";
    }
    return 0;
}