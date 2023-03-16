#include <iostream>
using namespace std;
int
	a,b,num=0;
int main(int argc, char *argv[]) 
{
	cout<<"--Te dire si el numero que me estas dando es PAR o INPAR--";
	cout<<"\nIngresa la cantidad de numero: ";
	cin>>a;
	for (int i=a;i>=0;i--)
    {
        b+=1;cout<<"\nDame el numero "<<b<<":";cin>>num;
            if (num%2==0){cout<<"Este numero es PAR\n";}else{cout<<"Este numero es INPAR\n";}
	}
	return 0;
}