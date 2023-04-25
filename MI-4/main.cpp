#include <iostream>

using namespace std;
int numero,quinta=0,resto=0,septima=0;
int main()
{
    cout<<"Ingrese un numero: ";
    cin>>numero;
    quinta = numero / 5 ;
    resto = numero % 5;
    septima = quinta / 5;
    cout<<"Resultados..."<<endl;
    cout<<"Quintar parte del numero: "<<quinta<<endl;
    cout<<"Resto de numero : "<<resto<<endl;
    cout<<"Septima parte: "<<septima<<endl;
    return 0;
}
