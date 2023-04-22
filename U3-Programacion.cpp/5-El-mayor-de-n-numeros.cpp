#include <iostream>
using namespace std;
int i,a,c,resultado=0;char resp;
int main (int argc, char*argv[])
{
    do{
	cout<<"\n--Te dare el numero mayor de entre todos los numeros que me des\n";
    cout<<"Dime cuantos numeros quieres contar: ";cin>>a;cout<<"\n";
		for (i=0;i<a;i++){      
        cout<<"Dame el numero "<<i+1<<": ";cin>>c;
			if (c>resultado){resultado=c;}}
    cout<<"\nEl mayor de todos los numeros que me diste fue: "<<resultado;
	cout<<"\n\nQuieres volver a ingresar otros numeros? (y/n) ";cin>>resp;
	}while(resp=='y' || resp=='Y');
    return 0;
}
