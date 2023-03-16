#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int i=0,n=0,x,z,a,b=0,c=0,cont=0,cont2=0,suma=0,resultado=0,num; char resp;
int main (int argc, char*argv[])
{
    do
    {
    cout<<"Menu\n";
    cout<<"1. Suma acomulada\n";cout<<"2. Factorial\n";cout<<"3. El mayor de n numeros\n";cout<<"4. Muestre aleatorios menores a 100\n";
    cout<<"5. Cuenta pares o inpares menores a 100\n";cout<<"6. Triangulo de asteriscos\n";cout<<"7. Aprende a sumar\n";
    cout<<"Ingresa una opcion ";cin>>x;
        switch (x)
        {
        case 1:cout<<"--Te voy a dar el resultado de la suma acomulativa del numero que me des--";
            cout<<"\nIngresa un numero: ";cin>>a;i=0;cont=0;suma=0;
	            for (i=a;i>0;i--){cont+=1;suma=suma+cont;}
	            cout<<"La suma acomulada es de: "<<suma;break;
        case 2:cout<<"--Te voy a factorizar cualquier numero que me des--";
            cout<<"\nIngresa un numero: ";cin>>a;i=0;b=1;
                for (i=1;i<=a;i++){b=b*i;}
                cout<<"\nEl factorial de "<<a<<" es: "<<b;break;
        case 3:cout<<"--Te dare el numero mayor de entre todos los numeros que me des\n";
            cout<<"Dime cuantos numeros quieres contar: ";cin>>a;b=0;i=0;resultado=0;
                for (i=a;i>0;i--){b+=1;
                cout<<"Dame el numero "<<b<<": ";cin>>c;if (c>resultado){resultado=c;}}
                cout<<"\nEl mayor de todos los numeros que me diste fue: "<<resultado;break;
        case 4:srand(time(NULL));
            cout<<"--Te dare la cantidad de numeros alearorios menores a 100 que me pidas--";
            cout<<"\nIngresa el numeros: ";cin>>a;b=0;i=0;
                for (i=a;i>0;i--){x=rand()%(101);b+=1;cout<<"\nNumero "<<b<<": "<<x;}break;
        case 5:cout<<"--Te dire si el numero que me estas dando es PAR o INPAR--";
        cout<<"\nIngresa la cantidad de numeros: ";cin>>n;num=0;b=0;
	        while (cont<n){num+=1;cout<<"\n\nIngresa el numero "<<num<<": ";cin>>b;
		        if (b%2==0){cout<<"-Este numero es PAR";}
		            else{cout<<"-Este numero es INPAR";}cont+=1;}break; 
        case 6:cout<<"--Te dare un triangulo con asteriscos del menor al mayor--";
	        cout<<"\nDe cuantos numeros quieres el triangulo? \n";cin>>n;cont=0;cont2=0;
	            while (cont<n){cont=cont+1;cont2=0;
		            while (cont2<cont){cont2=cont2+1;cout<<"*";}cout<<"\n";}break;
        case 7:
            do{srand(time(NULL));
            cout<<"--Aprendamos a sumar con los problemas y te dire si estas bien o mal--";
            cout<<"\nIngresa el numero de operaciones que quieres realizar: ";
            cin>>a;b=0;cont=a;
                for (int i=a;i>0;i--){x=rand()%(51);z=rand()%(51);resultado=(x+z);b+=1;
                cout<<"\nOperacion "<<b<<". Cuanto es "<<x<<" + "<<z<<" = ";cin>>c;
                    if (c==resultado){cout<<"Correcto!\n";}
                    else{cout<<"Incorrecto, la respues correcta es: "<<resultado<<"\n";cont-=1;}}
                        if(cont==a){cout<<"\nFelicidades! Obtuviste una calificacion perfecta";}
                        else{cout<<"\n--Tuviste "<<cont<<" acierto/s de "<<a<<". Debemos de seguir practicando";}
                        cout<<"\n";cout<<"\nDeseas repetirlo? ";cin>>resp;cout<<"\n";}while (resp=='s' || resp=='S');break;
        default:cout<<"\nLa opciones no existe, ingresa un numero de 1 al 5 dependiendo lo que quieres";break;
        }
    cout<<"\n\nQuieres volver a elegir alguna opcion del menu de operaciones? ";cin>>resp;
    } while (resp=='S' || resp=='s');
    return 0;
}