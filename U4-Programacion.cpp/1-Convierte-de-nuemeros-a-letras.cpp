#include <iostream>
using namespace std;
int u,d,c,m,a;
int main (int argc, char*argv[])
{
    cout<<"Te dare el desgloce de cualquier numero que me des";
    cout<<"\nIngresa un numero: ";
    cin>>a;
    u=a%10;d=(a/10)%10;c=(a/100)%10;m=(a/1000)%10;
    cout<<m<<"\n";cout<<c<<"\n";cout<<d<<"\n";cout<<u<<"\n";
    switch (m)
    {
    case 1:cout<<"\nMil";break;
    case 2:cout<<"\nDos mil";break;
    case 3:cout<<"\nTres mil";break;
    }
    switch (c)
    {
    case 1:cout<<"\nCien";break;
    case 2:cout<<"\nDocientos";break;
    case 3:cout<<"\nTrecientos";break;
    case 4:cout<<"\nCuatrocientos";break;
    case 5:cout<<"\nQuinientos";break;
    case 6:cout<<"\nSeiscientos";break;
    case 7:cout<<"\nSientecientos";break;
    case 8:cout<<"\nOchocientos";break;
    case 9:cout<<"\nNovecientos";break;
    }
    switch (d)
    {
    case 1:cout<<"\nDiez";break;
    case 2:cout<<"\nVeinte";break;
    case 3:cout<<"\nTreinta";break;
    case 4:cout<<"\nCuarenta";break;
    case 5:cout<<"\nCicuenta";break;
    case 6:cout<<"\nSesenta";break;
    case 7:cout<<"\nSetenta";break;
    case 8:cout<<"\nOchenta";break;
    case 9:cout<<"\nNoventa";break;
    }
    switch (u)
    {
    case 1:cout<<"\nUno";break;
    case 2:cout<<"\nDos";break;
    case 3:cout<<"\nTres";break;
    case 4:cout<<"\nCuatro";break;
    case 5:cout<<"\nCinco";break;
    case 6:cout<<"\nSeis";break;
    case 7:cout<<"\nSiete";break;
    case 8:cout<<"\nOcho";break;
    case 9:cout<<"\nNueve";break;
    }
}