#include <iostream>

using namespace std;

int numero,numero2,suma=0, resta=0;
int main()
{
    cout<<"Ingrese un numero porfavor: ";
    cin>>numero;
    cout<<"Ingrese otro numero porfavor: ";
    cin>>numero2;
    suma=numero+numero2;
    resta=numero-numero2;
    cout<<"Resultados: "<<endl;
    cout<<"Suma: "<<suma<<endl;
    cout<<"Resta: "<<resta<<endl;
    return 0;
}
