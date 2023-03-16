#include <iostream>
using namespace std;
int
    cont=0,n,cont2=0,a=0;
int main(int argc, char*argv[])
{
    cout<<"Ingresa un numero: ";
    cin>>n;
    while (cont<n)
    {
        cont=cont+1;
        cont2=0;
        a=0;
        while (cont2<cont)
        {
            cont2=cont2+1;
            a=a+1;
            cout<<a;
        }
        cout<<"\n";
    }
    return 0;
}