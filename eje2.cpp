#include "iostream"
#include "conio.h"
float prome(int&,int&);
using namespace std;

int main ()
{
    cout<<endl<<"Tamanho de arreglo con su promedio"<<endl<<endl;
    int x;
    int suma=0;
    float promedio=0;
    cout<<"Ingrese el tamanho de su arreglo: "<<endl; //generando el tamaño del arreglo
    cin>>x;
    int valores[x];
    cout<<"Ingrese los numeros segun el tamanho que le dio al arreglo: "<<endl;
    
    for (int i=0;i<x; i++)
    {
        cin>>valores[i];
    }
    cout<<"El tamanho del arreglo es: "<<endl; //definiendo el tamaño del arreglo para el usuario
    for (int i=0; i<x; i++)
    {
        cout<<valores[i]<<endl;
    }
    for (int i=0; i<x; i++)
    {
        suma+=valores[i]; //haciendo la suma del arreglo segun sus componentes
        
    }
    prome(x,suma);
    
    getch ();
    return 0;
}

float prome(int& numx, int& numy)
{
    float promedio=0;
    for(int i=0;i<numx;i++)
    {
        promedio=numy/numx;
    }
    cout<<endl<<"El promedio de su arreglo es: "<<endl<<promedio;
}
