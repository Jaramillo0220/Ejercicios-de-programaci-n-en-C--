#include <iostream>
using namespace std;
float a,b,c=0,pago,interes,deuda,pagosM,total=0,inte; char resp;
int main (int argc, char*argv[])
{
    do{
    cout<<"\n\nTe dire la informacion acerca de los pagos que tendras que hacer al comprar tu telefono\n";
    cout<<"\nMonto del telefono: ";cin>>a;cout<<"\nIntereses a pagar: ";cin>>inte;
    cout<<"\nCantidad de meses para pagar el telefono: ";cin>>b;
    cout<<"\n\nMeses           Pagos              Interes              Deuda            Pago Mensual\n";
    c=0;total=0;pago=a/b;interes=a*(inte*.01);deuda=a-(a/b);pagosM=(a/b)+(a*(inte*.01));
        for (int i=0;i<b;i++){total=total+pagosM;
            if(deuda>0){c+=1;cout<<"\n "<<c<<"             "<<pago<<"             "<<interes<<"             "<<deuda<<"             "<<pagosM;
            interes=deuda*(inte*.01);deuda=deuda-pago;pagosM=pago+interes;}
                else{c+=1;cout<<"\n "<<c<<"             "<<pago<<"             "<<interes<<"             "<<0<<"                   "<<pagosM;}}
    cout<<"\n\nTotal a pagar por el telefono: "<<total<<" pesos\n";
        cout<<"\nQuieres volver a ingresar el costo de otro telefono? (y/n)";cin>>resp;
    }while (resp=='y' || resp=='Y');
    return 0;
}