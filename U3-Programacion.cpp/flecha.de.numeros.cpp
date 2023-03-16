#include <iostream>
using namespace std;
int
    a,cont=0,cont2=0,n;
int main(int argc, char *argv[]){
    cout<<"Introduce un numero: ";
    cin>>n;
    a=n;
    while (cont<n)
    {
        cont=cont+1;
        cont2=0;
        while (cont2<cont)
        {
            cont2=cont2+1;
            cout<<"*";
        }
        cout<<"\n";
    }
    cont=0;
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
