#include <iostream>

using namespace std;

int tamanio(char *V)
{
    int t=0;
    for ( ;*V!='\0'; V++)
    {
        t++;
    }
    return t;
}

int main()
{
    char *V=new char [30];
    cout << "Ingrese cadena : "; cin>>V;
    cout<<"La cadena tiene de tamano : "<<tamanio(V);
    return 0;
}
