//Dados 10 valores informar el mayor
#include <iostream>

using namespace std;

int main()
{
    int numero,mayor;
    mayor=0;
    for(int i=0; i<=10; i++){
        cout<<"Ingrese un numero: ";
        cin>>numero;
        if(numero > mayor){
            mayor = numero;
        }
    }
    cout<<"El mayor de los numeros ingresados es: "<<mayor<<endl;

    return 0;
}
