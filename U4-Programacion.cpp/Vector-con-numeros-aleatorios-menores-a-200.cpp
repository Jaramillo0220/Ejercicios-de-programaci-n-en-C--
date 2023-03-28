#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int i,x[100];char resp;
int main (int argc, char*argv[])
{
    do{
    srand(time(NULL));
        for (i=0;i<100;i++){
            x[i]=rand()%(201);
            cout<<i<<". "<<x[i]<<"\n";}
        cout<<"\n\nQuieres volver a repetirlo? (y/n) ";cin>>resp;
    }while(resp=='y' || resp=='Y');
}