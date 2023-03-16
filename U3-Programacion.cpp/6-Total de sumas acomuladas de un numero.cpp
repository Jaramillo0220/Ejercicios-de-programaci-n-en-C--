#include <iostream>
using namespace std;
int
	n,suma=0;
int main(int argc, char *argv[]) 
{
	cout<<"--Voy a encontrar el total de sumas acomulativas de cualquier numero que me des--";
	cout<<"\nIngresa un numero: ";
	cin>>n;
	while (n>0)
	{
		suma=suma+1;
		n=n-suma;
	}
	cout<<"El total de sumas fueron: "<<suma;
	return 0;
}
