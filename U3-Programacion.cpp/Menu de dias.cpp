#include <iostream>
using namespace std;
int
    x;
int main(int argc, char *argv[]) 
{
	cout<<"Menu \n";
    cout<<"1. Lunes \n";
    cout<<"2. Martes \n";
    cout<<"3. Miercoles \n";
    cout<<"4. Jueves \n";
    cout<<"5. Viernes \n";
    cin>>x;
    switch (x)
    {
    case 1:
        cout<<"Hoy es lunes \n";break;
    case 2:
        cout<<"Hoy es martes \n";break;
    case 3:
        cout<<"Hoy es miercoles \n";
        break;
    case 4:
        cout<<"Hoy es jueves \n";break;
    case 5:
        cout<<"Hoy es viernes \n";break;
    default:
        cout<<"La opcion no existe";
        break;
    }
	return 0;
}