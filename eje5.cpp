#include "iostream"
#include "conio.h"
using namespace std;

int main()
{
    int arreglo[101]; //numeros naturales impares
    int a;
    cout <<"100 primeros numeros impares"<<endl<<endl;

    for (a=101; a>=1; a-=2) //generando los numeros desde el 101 hasta el 1
    {
        cout<<a<<endl;

    }
    getch ();
    return 0;

}