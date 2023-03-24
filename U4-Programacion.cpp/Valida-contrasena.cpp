#include <iostream>
#include <cstring>
using namespace std;
    const char*c2="clave123";char c[50],resp; 
int main(int argc, char*argv[]) {
    do{
    cout<<"\n\nIntroduce la contraseña: ";cin>>c;
    if(strcmp(c,c2)==0){cout<<"\nBienvenido!";return 0;}
        else{cout<<"\nUsuario incorrecto.";}
    cout<<"\n\nQuieres volver a intentar? (y/n)";cin>>resp;
    }while(resp=='y' || resp=='Y');
    return 0;
}




