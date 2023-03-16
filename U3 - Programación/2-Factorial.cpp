#include <iostream>
using namespace std;
int a,i,b=1;
int main(int argc, char*argv[])
{
    cout<<"--Te voy a factorizar cualquier numero que me des--";
    cout<<"\nIngresa un numero: ";
    cin>>a;
    for (i=1;i<=a;i++)
    {
        b=b*i;
    }
    cout<<"\nEl factorial de "<<a<<" es: "<<b;
    
    return 0;
}
