#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int x,a,b=0,resultado=0;
int main (int argc, char*argv[])
{
    srand(time(NULL));
    cout<<"--Ingresa la cantidad de numero aleatorios que quieras y te dire cual es el mayor de todos del 1 al 50--";
    cout<<"\nIngresa un numero: ";
    cin>>a;
    for (int i=a;i>0;i--)
    {      
        x=rand()%(51);
        b+=1;cout<<"\nNumero "<<b<<": "<<x;
        if (x>resultado){resultado=x;}
    }
    cout<<"\nEl mayor de todos los numeros aleatorios es: "<<resultado;

}