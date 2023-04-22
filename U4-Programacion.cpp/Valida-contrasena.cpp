#include <iostream>
#include <cstring>
using namespace std;
    const char*c2="clave123";char c[50],resp; 
int main(int argc, char*argv[]) {
    do{
cout<<"\nIntroduce la contrasena: ";cin>>c;
    if(strcmp(c,c2)==0){cout<<"\n----------Bienvenido!----------";return 0;}
        else{cout<<"\nUsuario incorrecto!. Vuelve a intentar\n";}
    }while(strcmp(c,c2)!=0);
    return 0;
}




