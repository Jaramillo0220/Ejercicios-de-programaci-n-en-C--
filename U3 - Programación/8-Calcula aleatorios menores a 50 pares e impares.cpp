#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int a,b=0,x,cont;
int main (int argc, char*argv[])
{
    srand(time(NULL));
    cout<<"Ingresa la cantidad de numero que quieras y te dire sin son pares o inpares";
    cout<<"\nIngresa un numero: ";
    cin>>a;
    for (int i=a;i>0;i--)
    {      
        b+=1;x=rand()%(51);
        if (x%2==0){cout<<"\nAl numero "<<b<<" le salio el numero "<<x<<" por lo que es: PAR";}
		else{cout<<"\nAl numero "<<b<<" le salio el numero "<<x<<" por lo que es: INPAR";}
    }
    return 0;
}