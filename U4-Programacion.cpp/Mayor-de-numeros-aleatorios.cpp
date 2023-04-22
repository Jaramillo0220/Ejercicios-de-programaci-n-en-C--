#include <iostream>
using namespace std;
int a[100],b=0,resultado=0; char resp;
int main (int argc, char* argv[])
{
    do {
    cout<<"\nTe voy a generar 100 numeros de forma aleatorias y te dire cual es el mayor de todos\n";
    for (int i=0;i<100;i++){a[i]=rand()%101;
    cout<<"\nEl numero aleatiorio "<<i+1<<" es: "<<a[i];
        if (a[i]<resultado){resultado=a[i];}}
    cout<<"\nDe entre todos los numeros aleariorios el mayor fue: "<<resultado;
    cout<<"\n\nQuieres volver a generar otros 100 numeros aletorios? (y/n) ";cin>>resp;
    }while(resp=='y' || resp=='Y');
    return 0;
}