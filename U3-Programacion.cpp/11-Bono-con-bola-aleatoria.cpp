#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int x,a,b=0,resultado=0;
char resp;
int main (int argc, char*argv[])
{
    do{
    srand(time(NULL));
    cout<<"--Rifa de bolas aleatorias para que los alumnos puedan ganar un BONO--";
    cout<<"\nIngresa el numero de alumnos que van a participar: ";
    cin>>a;b=0;
    for (int i=a;i>0;i--){x=rand()%(51);b+=1;cout<<"\nAl alumno numero "<<b<<" le salio la bola: "<<x;
    if (x>40 and x<=50){cout<<"\nTendra un BONO de $350 pesos\n";}
    if (x>10 and x<=40){cout<<"\nTendra un BONO de $200\n";}
    if (x>0 and x<=10){cout<<"\nTendra un BONO de $50\nÑ";}}
    cout<<"\n";cout<<"Deseas repetirlo?\n";cin>>resp;cout<<"\n";
    }while (resp=='s' || resp=='S');
	return 0;
}