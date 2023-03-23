#include <iostream>
using namespace std;
int
    n,suma,i;
int main(int argc, char*argv[])
{
    cout<<"Ingresa un numero: ";
    cin>>n;
    for (i=0;i<=n;i++)
    {
        suma=suma+i;
    }
    cout<<"La suma acoumulada es de: "<<suma;
    return 0;
}