#include <iostream>
using namespace std;
int i,j,a[4][4],suma=0;
int main (int argc, char* argv[])
{
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<"Int. los valores ";
            cin>>a[i][j];
            suma=suma+a[i][j];
        }
    }
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                cout<<a[i][j];
            }
            cout<<"\n";
        }
    cout<<"\n\nLa suma acomulada es: "<<suma;    
    return 0;
}