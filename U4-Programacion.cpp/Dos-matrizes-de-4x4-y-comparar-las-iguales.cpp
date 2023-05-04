#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstring>
using namespace std;
int b=0,v,h,x,c,cont=0;
char a[16][3]={"H","J","K","L","E","O","N","M","F","I","L","O","G","H","V","A"},comp[16];
char ab[16][3]={"H","T","D","Q","L","O","B","X","W","A","L","H","Q","I","O","A"},resp;
const char ac[28][4]={"a","b","c","ch","d","e","f","g","h","i","j","k","l","ll","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
const char ad[28][4]={"a","b","c","ch","d","e","f","g","h","i","j","k","l","ll","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
char compa[28][4],compa1[28][4],suma[16][4];
int main (int argc,char* argv[])
{
    do{
    cout<<"\n||| Comparare dos matrices  |||\n";
    cout<<"\n1. Ingresa los de forma aleatoria ";
    cout<<"\n2. Datos predeterminados ";cout<<"\nIngresa la opcion: ";cin>>x;
    switch (x)
    {
        case 1:srand(time(NULL));b=0;
        for(v=0;v<4;v++)
        {
            for(h=0;h<4;h++){c=rand()%(29);compa[b][4]=ac[c][4];cout<<" ["<<ac[c][4]<<"] ";}cout<<"\n";
        }
        b=0;cout<<"\n\n";
        for(v=0;v<4;v++)
        {
            for(h=0;h<4;h++){c=rand()%(29);compa1[b][4]=ad[c][4];cout<<" ["<<ad[c][4]<<"] ";}cout<<"\n";
        }
        b=0;
        for(v=0;v<4;v++)
        {
            for(h=0;h<4;h++)
            {
                if((strcmp(compa[b],compa1[b]))==0){suma[b][1]=compa[b-1][3];b=b+1;cout<<"";}
   
            }
        }
        b=0;cout<<"\n\n";
        for(v=0;v<4;v++)
        {
            for(h=0;h<4;h++){cout<<" ["<<suma[b]<<"] ";b=b+1;}cout<<"\n";
        }
        break;

        case 2:b=0;
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
    break;
    }
    cout<<"\n\nQuieres volver a ingresar otros numeros? (y/n): ";cin>>resp;
    }while(resp=='Y' || resp=='y');
    return 0;
}