#include <iostream>
using namespace std;
int
    cont=0,n,cont2=0,a=0;
int main(int argc, char*argv[])
{
    cout<<"--Te dare un triangulo con numeros del menor al mayor--";
	cout<<"\nDe cuantos numeros quieres el triangulo? \n";
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