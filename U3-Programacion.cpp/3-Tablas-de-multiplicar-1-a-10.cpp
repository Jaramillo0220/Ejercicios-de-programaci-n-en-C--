#include <iostream>
using namespace std;
int a,i,b=1;char resp;
int main(int argc, char*argv[])
{
    do{
	cout<<"\n--Tablas de multiplicar del 1 al 10 de cualquier numero--";
    cout<<"\nIngresa un numero: ";cin>>a;cout<<"\n";
		for (i=1;i<=10;i++){cout<<a<<" X "<<i<<" = "<<(a*i)<<"\n";}
	cout<<"\nQuieres volver a ingresar otro numero? (y/n) ";cin>>resp;
	}while(resp=='y' || resp=='Y');
    return 0;
}
