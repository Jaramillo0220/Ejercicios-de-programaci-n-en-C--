#include <iostream>
using namespace std;
int i,n,suma=0;char resp;
int main(int argc, char *argv[]) 
{
	do{
	cout<<"\n--Voy a encontrar el total de sumas acomulativas de cualquier numero que me des--";
	cout<<"\nIngresa un numero: ";cin>>n;suma=0;
		for (i=0;n>i;i++){suma=suma+1;n=n-suma;}
	cout<<"El total de sumas fueron: "<<suma;
	cout<<"\n\nQuieres volver a ingresar otro numero? (y/n) ";cin>>resp;
	}while(resp=='y' || resp=='Y');
	return 0;
}
