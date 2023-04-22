#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int i,x[100];char resp;
int main (int argc, char*argv[])
{
    do{
    cout<<"\n\nDe entre 100 numeros, te mencionare aquillos numeros que son pares y la posicion donde se encontro.\n";    
    srand(time(NULL));
        for (i=0;i<100;i++){
            x[i]=rand()%(201);
            if (x[i]%2==0){cout<<"\n-Salio el numero: "<<x[i]<<". Este numero es par y se encontro en la posicion: "<<i;}}
        cout<<"\n\nQuieres volver a repetirlo? (y/n) ";cin>>resp;
    }while(resp=='y' || resp=='Y');
}