#include <iostream>
using namespace std;
int a[100],b[100],cont=0;
int main (int argc, char* argv[])
{
    cout<<"Te dare el resultado de 100 numeros aleatios";
    cout<<"\nFila 1      Fila 2";
        for (int i=0;i<100;i++){a[i]=rand()%100;b[i]=rand()%100;
        cout<<"\n"<<a[i]<<"           "<<b[i];}
            for (int i=0;i<100;i++){
                if (a[i]==b[i]){cout<<"\n\n"<<a[i]<<" + "<<b[i]<<" = "<<a[i]+b[i];}}
    return 0;
}