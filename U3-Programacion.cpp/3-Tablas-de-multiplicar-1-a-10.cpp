#include <iostream>
using namespace std;
int a,i,b=1;
int main(int argc, char*argv[])
{
    cout<<"--Tablas de multiplicar del 1 al 10 de cualquier numero--";
    cout<<"\nIngresa un numero: ";
    cin>>a;
    for (i=1;i<=10;i++)
    {
        cout<<a<<" X "<<i<<" = "<<(a*i)<<"\n";
    }
    return 0;
}
