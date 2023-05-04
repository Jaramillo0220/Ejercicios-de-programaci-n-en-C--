#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int y,i,j,x,a1,b1,b2,cont=0,suma;
int a[10][10];
char resp;
int main (int argc, char* argv[])
{
    do{
    cout<<"\n||| Te dire si una matriz es magica o no |||\n";
    cout<<"\n1. Ingresa los datos manualmente ";
    cout<<"\n2. Los datos se rellenaran aleatoriamente ";cout<<"\nIngresa la opcion: ";cin>>x;
    switch (x)
    {
        case 1:cont=0;cout<<"\nIngresa la cantidad de columnas (vertical): ";cin>>b2;
        cout<<"Ingresa la cantidad de filas (horizontal): ";cin>>b1;cout<<"\n";
            for(i=0;i<b2;i++)
            {
                for(j=0;j<b1;j++){
                cout<<" Ingresa los datos de la matriz posicion ("<<i<<","<<j<<"): ";cin>>a1;a[i][j]=a1;}
            cout<<"\n";
            }
            for(i=0;i<b2;i++)
            {
                for(j=0;j<b1;j++){cout<<" [ "<<a[i][j]<<" ] ";}
                cout<<"\n";
            }
            //Operaciones para las suma de las matrices
            for(i=0;i<b1;i++)
            {
                suma=suma+a[i][i];
                    if (suma==15){cont=cont+1;}
            }suma=0;
            for(i=0;i<b1;i++)
            {
                suma=suma+a[0][i];
                    if (suma==15){cont=cont+1;}
            }suma=0;
            for(i=0;i<b1;i++)
            {
                suma=suma+a[1][i];
                    if (suma==15){cont=cont+1;}
            }suma=0;
            for(i=0;i<b1;i++)
            {
                suma=suma+a[2][i];
                    if (suma==15){cont=cont+1;}
            }suma=0;
            y=b1-1;
            for(i=0;i<b1;i++)
            {
                suma=suma+a[i][y];
                y=y-1;
                    if (suma==15){cont=cont+1;}
            }suma=0;
            if(cont==5){cout<<"\nLa matriz es magica!! Ya que la suma, no importando donde empices es de 15";}
            else{cout<<"\nEstas matriz no es magica ya que la suma de sus lados no es 15 :(";}
            
            break;
        case 2:cout<<"\nIngresa la cantidad de columnas (vertical): ";cin>>b2;
        cout<<"Ingresa la cantidad de filas (horizontal): ";cin>>b1;cout<<"\n";
        srand(time(NULL));cont=0;
            for(i=0;i<b2;i++){for(j=0;j<b2;j++){a1=rand()%(10);a[i][j]=a1;}}
            for(i=0;i<b2;i++)
            {
                for(j=0;j<b1;j++){cout<<" [ "<<a[i][j]<<" ] ";}
                cout<<"\n";
            }
            //Operaciones para las suma de las matrices
            for(i=0;i<b1;i++)
            {
                suma=suma+a[i][i];
                    if (suma==15){cont=cont+1;}
            }suma=0;
            for(i=0;i<b1;i++)
            {
                suma=suma+a[0][i];
                    if (suma==15){cont=cont+1;}
            }suma=0;
            for(i=0;i<b1;i++)
            {
                suma=suma+a[1][i];
                    if (suma==15){cont=cont+1;}
            }suma=0;
            for(i=0;i<b1;i++)
            {
                suma=suma+a[2][i];
                    if (suma==15){cont=cont+1;}
            }suma=0;
            y=b1-1;
            for(i=0;i<b1;i++)
            {
                suma=suma+a[i][y];
                y=y-1;
                    if (suma==15){cont=cont+1;}
            }suma=0;
            if(cont==5){cout<<"\nLa matriz es magica!! Ya que la suma, no importando donde empices es de 15";}
            else{cout<<"\nEstas matriz no es magica ya que la suma de sus lados no es 15 :(";}
            break;default:cout<<"\n\nTienes que ingresar una opcion valida"; break;
    }
    cout<<"\n\nQuieres volver a ingresar otros numeros? (y/n): ";cin>>resp;
    }while(resp=='Y' || resp=='y');
    return 0;
}
