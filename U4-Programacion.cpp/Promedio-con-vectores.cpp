#include <iostream>
using namespace std;
int i, a = 0;
char resp;
int main(int argc, char *argv[])
{
    do
    {
        cout << "\n\nTe dire el promedio general de los alumnos, solo me tienes que dar sus califiaciones";
        cout << "\nDame el numero de alumnos: ";
        cin >> a;
        char alu[a][15];
        int cal0[a], cal1[a], cal2[a], prom[a];
        for (i = 0; i < a; i++)
        {
            cout << "\nDame el nombre del alumno " << i + 1 << ": ";
            cin >> alu[i];
        }
        cout << "\nEn la materia de Matematicas...\n";
        for (i = 0; i < a; i++)
        {
            cout << i + 1 << ". Cuanto saco " << alu[i] << "? ";
            cin >> cal0[i];
        }
        cout << "\nEn la materia de Fisica...\n";
        for (i = 0; i < a; i++)
        {
            cout << i + 1 << ". Cuanto saco " << alu[i] << "? ";
            cin >> cal1[i];
        }
        cout << "\nEn la materia de Java...\n";
        for (i = 0; i < a; i++)
        {
            cout << i + 1 << ". Cuanto saco " << alu[i] << "? ";
            cin >> cal2[i];
        }
        for (i = 0; i < a; i++)
        {
            prom[i] = (cal0[i] + cal1[i] + cal2[i]) / 3;
        }
        cout << "\n----------------------------------------------------------------------";
        for (i = 0; i < a; i++)
        {
            cout << "\nEl promedio de " << alu[i] << " fue de: " << prom[i];
        }
        cout << "\n----------------------------------------------------------------------";
        cout << "\n\nQuieres volver a ingresar otra palabra? (y/n)";
        cin >> resp;
    } while (resp == 'y' || resp == 'Y');
    return 0;
}