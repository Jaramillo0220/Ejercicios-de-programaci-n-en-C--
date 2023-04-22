#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int a,b=0,x,cont;char resp;
int main (int argc, char*argv[])
{
	do{
		srand(time(NULL));
		cout<<"\n--Ingresa la cantidad de numero que quieras y te dire sin son pares o inpares--";
		cout<<"\nIngresa un numero: ";cin>>a;x=0;
		for (int i=a;i>0;i--){b+=1;x=rand()%(51);
		if (x%2==0){cout<<"\nAl numero "<<b<<" salio el numero "<<x<<": es PAR";}
		else{cout<<"\nAl numero "<<b<<" salio el numero "<<x<<": es INPAR";}}
		cout<<"\n\nQuieres volver a ingresar otro numero? (y/n) ";cin>>resp;
	}while(resp=='y' || resp=='Y');
	return 0;}
