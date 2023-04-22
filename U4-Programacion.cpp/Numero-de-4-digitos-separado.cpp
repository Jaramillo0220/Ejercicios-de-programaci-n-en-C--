#include <iostream>
using namespace std;
int a,i,resul[3];char resp;
int main (int argc, char* argv[])
{
    do{
    cout<<"\n\n--Te mostrare el numero que ingreses separado por digitos--";
    cout<<"\nIngresa un numero de maximo 4 digitos: ";cin>>a;
        if (a>0 and a<9999){resul[i=0]=a%10;resul[i=1]=(a/10)%10;resul[i=2]=(a/100)%10;resul[i=3]=(a/1000)%10;
        for (i=0;i<4;i++){if(resul[i]!=0){cout<<"\n"<<resul[i];}}}
            else{cout<<"\nNo puedes ingresar numeros mayores de 4 digitos, menores o iguales a cero.";}
            cout<<"\n\nQuieres voler a ingresar otro numero? (y/n) ";cin>>resp;
    }while(resp=='y' || resp=='Y');
    return 0;
}
