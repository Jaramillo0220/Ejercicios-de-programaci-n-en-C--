#include <iostream>
using namespace std;
int sum=0,x;
char frase[30];
int main (int argc, char* argv[])
{
    cout<<"Introduce la frase: \n";
    cin>>frase;
        for (x=0;x<30;x++)
        {
            switch(frase[x])
            {
            case 'a':
                sum++;    
                break;
            case 'e':
                sum++;    
                break;
            case 'i':
                sum++;    
                break;
            case 'o':
                sum++;    
                break;
            case 'u':
                sum++;    
                break;
            default:
                break;
            }
        }
    cout<<"\n En la frase hay: "<<sum<<" vocales";

    return 0;   
}