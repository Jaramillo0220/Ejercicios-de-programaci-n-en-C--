#include <iostream>
using namespace std;
int 
	X,N1,N2;
char
	resp;
int main(int argc, char *argv[])
{
	do{
			cout<<"Menu\n";cout<<"1.- Suma 2 numeros\n";cout<<"2.- Multiplica 2 numeros\n";cout<<"3.- resta 2 numeros\n";
			cout<<"\n";cout<<"Elige una opcion: ";cin>>X;N1=0;N2=0;cout<<"\n";
				switch (X){
					case 1:
						cout<<"Ingresa el primer numero: ";
						cin>>N1;
						cout<<"Ingresa el segundo numero: ";
						cin>>N2;
						cout<<"\n";
						cout<<"La suma de los 2 numeros es: "<<N1+N2<<"\n";break;
					case 2:cout<<"Ingresa el primer numero: ";
						cin>>N1;
						cout<<"Ingresa el segundo numero: ";
						cin>>N2;
						cout<<"\n";
						cout<<"La multiplicacion de los 2 numeros es: "<<N1*N2<<"\n";break;
					case 3:cout<<"Ingresa el primer numero: ";
						cin>>N1;
						cout<<"Ingresa el segundo numero: ";
						cin>>N2;
						cout<<"\n";
						cout<<"La resta de los 2 numeros es: "<<N1-N2<<"\n";break;
						default:cout<<"La opcion no existe.\n";
						break;
					}
			cout<<"\n";
			cout<<"Deseas repetirlo\n";
			cin>>resp;
			cout<<"\n";
	    }
		while (resp=='s' || resp=='S');
	return 0;
}