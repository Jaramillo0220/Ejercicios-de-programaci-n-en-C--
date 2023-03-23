#include <iostream>
using namespace std;
int a,b,c,dinero=10000;char resp;
int main (int argc, char*argv[])
{
    do{
    cout<<"\n\n--Bienvenido a su cajero virtual--";
    cout<<"\n1. Ingresar dinero en cuenta.";cout<<"\n2. Retira dinero de la cuenta.";
    cout<<"\n3. Consulta tu saldo.";cout<<"\n4. Salir.\n";cin>>a;
        switch (a){
            case 1:cout<<"\n--Ingresa dinero a tu cuenta--";cout<<"\n\nCuenta dinero vas a ingresa? ";cin>>b;
                if(b>0){dinero+=b;cout<<"\nAhora tu saldo es de: "<<dinero<<" pesos.";}
                    else{cout<<"\nNo puedes ingresar saldos menores o iguales a cero.";}break;
            case 2:cout<<"\n--Retira dinero de tu cuenta<<";cout<<"\n\nTu saldo actual es de "<<dinero<<" pesos";
            cout<<"\nCuenta dinero vas a retirar? ";cin>>c;dinero-=c;
                if (dinero<0){dinero+=c;cout<<"\nNo puedes retirar mas dinero del que tienes en tu cuenta.";break;}
                    if(c>0){cout<<"\nAhora tu saldo es de: "<<dinero<<" pesos.";}
                        else{cout<<"\nNo puedes ingresar saldos menores o iguales a cero.";}break;
            case 3:cout<<"\n\nTu saldo actual es de: "<<dinero<<" pesos.";break;
            case 4:cout<<"\nVuelva pronto, hasta luego.";return 0;break;
                default:cout<<"\nLa opcion no existe. Ingresa una opcion valida.";break;
            }cout<<"\n\nQuieres volver al menu principal? (y/n)\n";cin>>resp;
        }while(resp=='y' || resp=='Y');
    return 0;
}