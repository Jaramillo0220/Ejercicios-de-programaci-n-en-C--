#include <iostream>
using namespace std;
int
    a,cont=0,cont2=0,b=0,c=0;
int main(int argc, char *argv[])
{
    cout<<"Introduce un numero: ";
    cin>>a;
    c=a;
    while (cont<a)
    {
        cont=cont+1;
        cont2=0;
        b=a;
        while (cont2<c)
        {
            cont2=cont2+1;
            cout<<b;
            b=b-1;
        }
        c=c-1;
        cout<<"\n";
    }
    return 0;
}