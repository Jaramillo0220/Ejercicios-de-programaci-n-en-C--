#include <iostream>
#include <cstring>
using namespace std;
int b=0,v,h;
char a[16][3]={"H","J","K","L","E","O","N","M","F","I","L","O","G","H","V","A"},comp[16];
char ab[16][3]={"H","T","D","Q","L","O","B","X","W","A","L","H","Q","I","O","A"};
int main (int argc,char* argv[])
{
    for(v=0;v<4;v++)
    {
        for(h=0;h<4;h++){cout<<" ["<<a[b]<<"] ";b=b+1;}cout<<"\n";
    }
    b=0;cout<<"\n\n";
    for(v=0;v<4;v++)
    {
        for(h=0;h<4;h++){cout<<" ["<<ab[b]<<"] ";b=b+1;}cout<<"\n";
    }
    b=0;
    for(v=0;v<4;v++)
    {
        for(h=0;h<4;h++)
        {
            if(strcmp(a[b],ab[b])==0){comp[b]=ab[b-1][3];b=b+1;}else{b=b+1;}
        }
    }
    b=0;cout<<"\n\n";
    for(v=0;v<4;v++)
    {
        for(h=0;h<4;h++){cout<<" ["<<comp[b]<<"] ";b=b+1;}cout<<"\n";
    }
    b=0;
    for(v=0;v<16;v++)
    {
        if (comp[v]>0){cout<<"\n"<<"Posicion ["<<b<<"] ["<<b<<"]. Letra: "<<comp[v];b=b+1;}
    }
    return 0;
}
