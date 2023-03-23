#include <iostream>
using namespace std;
int a;char resp;
int main (int argc, char* argv[])
{
    do{cout<<"\n\nIngresa la edad de la persona: ";cin>>a;    
        if (a>=0 and a<100){
            if (a>=0 and a<=3){cout<<"\nBEBE";}
            if (a>=4 and a<=14){cout<<"\nNINO";}
            if (a>=15 and a<=18){cout<<"\nJOVEN";}
            if (a>=19 and a<=65){cout<<"\nADULTO";}
            if (a>=65){cout<<"\nADULTO 3RA";}
                }else{cout<<"\nTienes que ingresar una edad valida del 1 al 99";}
        cout<<"\n\nQuieres volver a ingresar otra edad? (y/n)";cin>>resp;
    }while (resp=='y' || resp=='Y');
        return 0;
}