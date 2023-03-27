#include <iostream>
using namespace std;
int i,a[5];
int main(int argc, char *argv[]) {
for (i=0;i<5;i++)
{
cout<<"Introduce el valor de la posicion "<<i<<": ";
cin>>a[i];
cout<<"\n";
}
for (i=0;i<5;i++){
cout<<"el dato de la posicion :"<<i<<" es: "<<a[i];
cout<<"\n";
}
return 0;
}

