#include <iostream>
using namespace std;
int n,cont=0,b,num=0,i;char resp;
int main(int argc, char *argv[]) 
{
	do{
	cout<<"\n--Te dire si el numero que me estas dando es PAR o INPAR--";
	cout<<"\nIngresa la cantidad de numero: ";cin>>n;
		for (i=0;i<n;i++){
		cout<<"\nIngresa el numero "<<i+1<<": ";cin>>b;
			if (b%2==0){cout<<"-Este numero es par.\n";}
				else{cout<<"-Este numero es inpar.\n";}}
	cout<<"\n\nQuieres volver a ingresar otros numeros? (y/n) ";cin>>resp;
	}while(resp=='y' || resp=='Y');
	return 0;
}
