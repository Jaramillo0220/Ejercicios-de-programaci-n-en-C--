#include <iostream>
#include <cstring>
using namespace std;
int i;
char
	capitales[9][15]={"Morelia","Saltillo","Toluca","Queretaro","Oaxaca","Chilpancingo","Pachuca","Tepic","Colima"},
	estados[9][15]={"Michoacan","Coahuila","Mexico","Queretaro","Oaxaca","Guerrero","Hidalgo","Nayarit","Colima"},
	palabras[15],resp;
int main(int argc, char *argv[]) 
{
	do{
    cout<<"\n\n--Te dire la capital del estado que me des o el estado de la capiral que me des--";
    cout<<"\nIntroduce un estado o una capital: ";cin>>palabras;
    for (i=0;i<10;i++){
		if (strcmp(palabras,estados[i])==0){cout<<"\nLa capital de "<<estados[i]<<" es: "<<capitales[i]<<"\n";}
		else if (strcmp(palabras,capitales[i])==0) {
			cout<<"\nEl estado de "<<capitales[i]<<" es: "<<estados[i]<<"\n";}
        }cout<<"\n\nQuieres volver a ingresar otra palabra? (y/n)";cin>>resp;
    }while(resp=='y' || resp=='Y');
	return 0; 
}