#include <iostream>
using namespace std;
int
	cont=0,cont2=0,n;
int main(int argc, char *argv[])
{
	cout<<"--Te dare un triangulo con asteriscos del menor al mayor--";
	cout<<"\nDe cuantos numeros quieres el triangulo? \n";
	cin>>n;
	while (cont<n)
	{
		cont=cont+1;
		cont2=0;
		while (cont2<cont)
		{
			cont2=cont2+1;
			cout<<"*";
		}
			cout<<"\n";
	}
	return 0;
}
	
