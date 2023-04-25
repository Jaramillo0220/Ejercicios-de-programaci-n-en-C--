#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int b=0,i,j,x,a1,b1,b2;
int a[10][10],a0[16]={1,2,3,4,12,13,14,5,11,16,15,6,10,9,8,7},ab[16];
char resp;
int main (int argc,char* argv[])
{
    do{
    cout<<"\n||| Comparara los datos de la matris y te dare los numeros pares |||\n";
    cout<<"\n1. Ingresa los datos manualmente ";
    cout<<"\n2. Datos predeterminados ";cout<<"\nIngresa la opcion: ";cin>>x;
    switch (x)
    {
        case 1:cout<<"\nIngresa la cantidad de columnas (vertical 1-10): ";cin>>b2;
        cout<<"Ingresa la cantidad de filas (horizontal 1-10): ";cin>>b1;cout<<"\n";
            for(i=0;i<b2;i++)
            {
                for(j=0;j<b1;j++){
                cout<<i+1<<". Ingresa el numero para la posición ("<<i<<","<<j<<"): ";cin>>a1;a[i][j]=a1;}
            cout<<"\n";
            }
                for(i=0;i<b2;i++)
                {
                    for(j=0;j<b1;j++){cout<<" [ "<<a[i][j]<<" ] ";}
                    cout<<"\n";
                }
            cout<<"\n\n";a[i][j]=0;
            for(i=0;i<b2;i++)
                {
                    for(j=0;j<b1;j++){
                        if(a[i][j]%2==0){a[i][j]=a[i][j]/2;cout<<" ["<<a[i][j]<<"] ";}
                            else{cout<<" ["<<a[i][j]<<"] ";}
                    }
                cout<<"\n";
                }
            break;
        case 2:a0[0]=1;a0[1]=2;a0[2]=3;a0[3]=4;a0[4]=12;a0[5]=13;a0[6]=14;a0[7]=5;a0[8]=11;a0[9]=16;a0[10]=15;a0[11]=6;a0[12]=10;a0[13]=9;a0[14]=8;a0[15]=7;
            b=0;for(i=0;i<4;i++)
            {
                for(j=0;j<4;j++){cout<<" ["<<a0[b]<<"] ";b=b+1;}
                cout<<"\n";
            }
            b=0;cout<<"\n\n";
                for(i=0;i<4;i++)
                {
                    for(j=0;j<4;j++){
                        ab[b]=a0[b];
                        if(a0[b]%2==0){a0[b]=a0[b]/2;cout<<" ["<<a0[b]<<"] ";b=b+1;}
                            else{cout<<" ["<<a0[b]<<"] ";b=b+1;}
                    }
                cout<<"\n";
                }
                break;
    }
    cout<<"\n\nQuieres volver a ingresar otros numeros? (y/n): ";cin>>resp;
    }while(resp=='Y' || resp=='y');
    return 0;
}