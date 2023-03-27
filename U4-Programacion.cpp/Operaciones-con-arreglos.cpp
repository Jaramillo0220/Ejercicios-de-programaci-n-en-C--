#include <iostream>
using namespace std;
int i,a[5],b[5],c[5],d[5];
int main(int argc, char *argv[]) {
for (i=0;i<5;i++){
cout<<"\nIntroduce el primer valor de la posicion "<<i<<": ";cin>>a[i];
cout<<"Introduce el segundo valor de la posicion "<<i<<": ";cin>>b[i];
c[i]=a[i]+b[i];d[i]=a[i]*b[i];}
cout<<"\n";
for (i=0;i<5;i++){cout<<"El resultado de la suma "<<i<<" es: "<<a[i]<<" + "<<b[i]<<" = "<<c[i];cout<<"\n";}
cout<<"\n";
for (i=0;i<5;i++){cout<<"El resultado de la multiplicacion "<<i<<" es: "<<a[i]<<" * "<<b[i]<<" = "<<d[i];cout<<"\n";}
return 0;
}
