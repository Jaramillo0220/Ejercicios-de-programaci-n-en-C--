#include <iostream>
using namespace std;
int
    n,cont=0,cont2=0,a=0;
int main(int argc, char *argv[])
{
    cout<<"Ingresa un numeroo: ";
    cin>>n;
    a=n;
    while (cont<n)
    {
        cont=cont+1;
        cont2=0;
        while (cont2<a)
        {
            cont2=cont2+1;
            cout<<"*";
        }
            a=a-1;
            cout<<"\n";
    }
    return 0;
}