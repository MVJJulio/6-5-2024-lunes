#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    char letra(1);
    cout<<"Ingrese una letra: ";
    cin>>letra;
    switch (letra)
    {
    case 'R':
     cout<<"Es el color Rojo\n";
     break;
    case 'Y':
     cout<<"Es el color amarillo\n";
     break;
    case 'B':
     cout<<"Es el color azul\n";
     break;
    case 'W':
     cout<<"Es el clor Blanco\n";
     break;
    case 'K':
     cout<<"Es el color negro\n";
     break;
    case 'C':
     cout<<"Es el color cian\n";
     break;
    case 'G':
     cout<<"Es el color verde\n";
     break;
    default:
     cout<<"Letra Invalida\n";
     break;
    }
    system("pause");
    return 0;
}