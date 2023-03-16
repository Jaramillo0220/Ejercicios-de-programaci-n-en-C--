#include <iostream>
using namespace std;
int
	a,cont=0,suma=0;
int main(int argc, char *argv[]) 
{
	cout<<"--Te voy a dar el resultado de la suma acomulativa del numero que me des--";
	cout<<"\nIngresa un numero: ";
	cin>>a;
	for (int i=a;i>0;i--)
	{
		cont+=1;suma=suma+cont;
	}
	cout<<"La sum acomulada es de: "<<suma;
	return 0;
}
