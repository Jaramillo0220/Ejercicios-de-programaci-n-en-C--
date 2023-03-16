#include <iostream>
using namespace std;
int a,b=0,c,resultado=0;
int main (int argc, char*argv[])
{
    cout<<"--Te dare el numero mayor de entre todos los numeros que me des\n";
    cout<<"Dime cuantos numeros quieres contar: ";
    cin>>a;
    for (int i=a;i>0;i--)
    {      
        b+=1;cout<<"Dame el numero "<<b<<": ";cin>>c;
        if (c>resultado){resultado=c;}
    }
    cout<<"\nEl mayor de todos los numeros que me diste fue: "<<resultado;
    return 0;
}