#include <iostream>
#include <cstring>
using namespace std;
int i,j,cont2=0;
char capitales[3][3][22]={{"  Papas sabritas  ","       Takis      ","     Galletas     "},{"    Coca-cola     ","   Sidral Mundet  ","Barra de chocolate"},{"   Donas bimbo    ","Leche de chocolate","     Doritos      "}},
	estados[3][3][15]={{"1","2","3"},{"4","5","6"},{"7","8","9"}},
	palabras[15],resp;
int main(int argc, char *argv[]) 
{
	do{cout<<"\n\n";cont2=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){cout<<"|          "<<cont2+1<<"         |";cont2=cont2+1;}cout<<"\n";
        for(j=0;j<3;j++){cout<<"| "<<capitales[i][j]<<" |";}cout<<"\n\n";
    }
    cout<<"\n\nIngresa el numero que desees: ";cin>>palabras;
    for (i=0;
    i<3;i++)
        {
            for (j=0;j<3;j++){
		if (strcmp(palabras,estados[i][j])==0){cout<<"\nEl producto numero "<<estados[i][j]<<" es: "<<capitales[i][j]<<"\n";}
		else if (strcmp(palabras,capitales[i][j])==0) {
			cout<<"\nEl producto numero "<<capitales[i][j]<<" es: "<<estados[i][j]<<"\n";}
        }
        }
        cout<<"\n\nQuieres volver a seleccionar otro producto? (y/n)";cin>>resp;
    }while(resp=='y' || resp=='Y');
	return 0; 
}