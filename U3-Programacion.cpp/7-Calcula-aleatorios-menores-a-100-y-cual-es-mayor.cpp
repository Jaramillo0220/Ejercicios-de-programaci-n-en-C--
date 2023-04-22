#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int x,a,resultado=0;char resp;
int main (int argc, char*argv[])
{
    do{
	srand(time(NULL));
    cout<<"\n--Ingresa la cantidad de numero aleatorios que quieras y te dire cual es el mayor de todos del 1 al 100--";
    cout<<"\nIngresa un numero: ";cin>>a;
		for (int i=0;a>i;i++){      
			x=rand()%(101);
			cout<<"\nNumero aleatorio "<<i+1<<": "<<x;
			if (x>resultado){resultado=x;}
		}cout<<"\n\nEl mayor de todos los numeros aleatorios es: "<<resultado;
	cout<<"\n\nQuieres volver a ingresar otro numero? (y/n) ";cin>>resp;
	}while(resp=='y' || resp=='Y');
	return 0;
}
