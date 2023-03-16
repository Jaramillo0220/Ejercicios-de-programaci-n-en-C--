#include <iostream>
using namespace std;
int
	n,cont=0,b,num=0;
int main(int argc, char *argv[]) 
{
	cout<<"--Te dire si el numero que me estas dando es PAR o INPAR--";
	cout<<"Ingresa la cantidad de numero: ";
	cin>>n;
	while (cont<n)
	{
	num=num+1;
	cout<<"\n";
	cout<<"\nIngresa el numero "<<num<<": ";
	cin>>b;
		if (b%2==0)
	
		{
			cout<<"-Este numero es par.";
		}
		else
			{
			cout<<"-Este numero es inpar.";
		}
	cont=cont+1;
	}
	return 0;
}
