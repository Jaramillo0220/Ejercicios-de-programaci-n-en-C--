#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int i,j,x,a1,a2,b1,b2,cont=0;
int a[10][10],b[10][10],c[10][10];
char resp;
int main (int argc, char* argv[])
{
    do{
    cout<<"\n||| Te dare el resultado de sumar dos matrices en una matriz aparte |||\n";
    cout<<"\n1. Ingresa los datos manualmente ";
    cout<<"\n2. Los datos se rellenaran aleatoriamente ";cout<<"\nIngresa la opcion: ";cin>>x;
    switch (x)
    {
        case 1:cout<<"\nIngresa la cantidad de columnas (vertical): ";cin>>b1;
        cout<<"Ingresa la cantidad de filas (horizontal): ";cin>>b2;cout<<"\n";
            for(i=0;i<b2;i++)
            {
                for(j=0;j<b1;j++){cont=cont+1;
                cout<<cont<<".1) Ingresa los datos de la matriz 1 ("<<i<<","<<j<<"): ";cin>>a1;a[i][j]=a1;
                cout<<cont<<".2) Ingresa los datos de la matriz 2 ("<<i<<","<<j<<"): ";cin>>a2;b[i][j]=a2;
                c[i][j]=b[i][j]*a[i][j];}
            cout<<"\n";
            }
            for(i=0;i<b2;i++)
            {
                for(j=0;j<b1;j++){cout<<" [ "<<a[i][j]<<" ] ";}
                cout<<"\n";
            }    
        cout<<"\n\n";
            for(i=0;i<b2;i++)
            {
                for(j=0;j<b1;j++){cout<<" [ "<<b[i][j]<<" ] ";}
            cout<<"\n";
            }   
        cout<<"\n\n"; 
            for(i=0;i<b2;i++)
            {
                for(j=0;j<b1;j++){cout<<" [ "<<c[i][j]<<" ] ";}
            cout<<"\n";
            }break;
        case 2:cout<<"\nIngresa la cantidad de columnas (vertical): ";cin>>b1;
        cout<<"Ingresa la cantidad de filas (horizontal): ";cin>>b2;cout<<"\n";
        srand(time(NULL));
            for(i=0;i<b2;i++)
            {
                for(j=0;j<b1;j++){
                a1=rand()%(10);a2=rand()%(10);
                a[i][j]=a1;b[i][j]=a2;c[i][j]=b[i][j]*a[i][j];}
            }
            for(i=0;i<b2;i++)
            {
                for(j=0;j<b1;j++){cout<<" [ "<<a[i][j]<<" ] ";}
                cout<<"\n";
            }    
        cout<<"\n\n";
            for(i=0;i<b2;i++)
            {
                for(j=0;j<b1;j++){cout<<" [ "<<b[i][j]<<" ] ";}
                cout<<"\n";
            }   
        cout<<"\n\n"; 
            for(i=0;i<b2;i++)
            {
                for(j=0;j<b1;j++){cout<<" [ "<<c[i][j]<<" ] ";}
            cout<<"\n";
            }break;
            default:cout<<"\n\nTienes que ingresar una opcion valida"; break;
    }
    cout<<"\n\nQuieres volver a ingresar otros numeros? (y/n): ";cin>>resp;
    }while(resp=='Y' || resp=='y');
    return 0;
}
