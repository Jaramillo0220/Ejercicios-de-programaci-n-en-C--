#include <iostream>
using namespace std;
int u,d,c,m,a;char resp;
int main (int argc, char*argv[])
{
    do{
	cout<<"\nTe covertire de numero decimal a numero romano";	
	cout<<"\nIngresa un numero decimal: ";cin>>a;cout<<"\n";
    u=a%10;d=(a/10)%10;c=(a/100)%10;m=(a/1000)%10;
    switch (m)
    {
    case 1:cout<<"M";break;
    case 2:cout<<"MM";break;
    case 3:cout<<"MMM";break;
    default:cout<<"La opciones no existe";break;
    }
    switch (c)
    {
    case 1:cout<<"C";break;
    case 2:cout<<"CC";break;
    case 3:cout<<"CCC";break;
    case 4:cout<<"CD";break;
    case 5:cout<<"D";break;
    case 6:cout<<"DC";break;
    case 7:cout<<"DCC";break;
    case 8:cout<<"DCCC";break;
    case 9:cout<<"CM";break;
    default:cout<<"La opciones no existe";break;
    }
    switch (d)
    {
    case 1:cout<<"X";break;
    case 2:cout<<"XX";break;
    case 3:cout<<"XXX";break;
    case 4:cout<<"XL";break;
    case 5:cout<<"L";break;
    case 6:cout<<"LX";break;
    case 7:cout<<"LXX";break;
    case 8:cout<<"LXXX";break;
    case 9:cout<<"XC";break;
    default:cout<<"La opciones no existe";break;
    }
    switch (u)
    {
    case 1:cout<<"I";break;
    case 2:cout<<"II";break;
    case 3:cout<<"III";break;
    case 4:cout<<"VI";break;
    case 5:cout<<"V";break;
    case 6:cout<<"VI";break;
    case 7:cout<<"VII";break;
    case 8:cout<<"VIII";break;
    case 9:cout<<"IX";break;
    default:cout<<"La opciones no existe";break;
    }
	cout<<"\n\nQuires ingresar otro numero? (y/n) ";cin>>resp;
	}while(resp=='y' || resp=='Y');
	return 0;
}
