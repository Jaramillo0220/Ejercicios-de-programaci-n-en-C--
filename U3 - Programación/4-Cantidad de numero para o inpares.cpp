#include <iostream>
using namespace std;
int
	n,cont=0,b,num=0;
int main(int argc, char *argv[]) 
{
	cout<<"Ingresa la cantidad de numeros que quieres saber si es par o inpar: ";
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
