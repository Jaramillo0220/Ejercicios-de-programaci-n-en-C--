#include <iostream>
#include <cstring>
using namespace std;
int v,h,b=0;
int main (int argc, char* argv[])
{
    char a[16][3]={"H","J","K","L","E","O","N","M","F","I","L","O","G","H","V","A"},suma[3];
        for(v=0;v<4;v++){
            for(h=0;h<4;h++){
                cout<<" ["<<a[b]<<"] ";b=b+1;
                if(h==v){suma[v]=a[b-2][3];}
            }
            cout<<"\n";
        }
    cout<<"\nLos caracteres de la diagonal fueron: "<<suma;
    return 0;
}