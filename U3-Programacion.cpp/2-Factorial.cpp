#include <iostream>
using namespace std;
int a,i,b=1;char resp;
int main(int argc, char*argv[])
{
    do{
	cout<<"\n--Te voy a factorizar cualquier numero que me des--";
    cout<<"\nIngresa un numero: ";
    cin>>a;
		for (i=1;i<=a;i++){b=b*i;}
		cout<<"\nEl factorial de "<<a<<" es: "<<b;
	cout<<"\n\nQuires ingresar otro numero? (y/n) ";cin>>resp;
	}while(resp=='y' || resp=='Y');
    return 0;
}
