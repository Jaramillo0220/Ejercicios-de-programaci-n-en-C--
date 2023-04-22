#include <iostream>
using namespace std;
int a,cont=0,suma=0;char resp;
int main(int argc, char *argv[]) 
{
	do{
	cout<<"\n--Te voy a dar el resultado de la suma acomulativa del numero que me des--";
	cout<<"\nIngresa un numero: ";
	cin>>a;
	for (int i=a;i>0;i--)
	{
		cont+=1;suma=suma+cont;
	}
	cout<<"\nLa sum acomulada es de: "<<suma;
	cout<<"\n\nQuieres ingresar otro numero? (y/n) ";cin>>resp;
	}while(resp=='y' || resp=='Y');
	return 0;
}
