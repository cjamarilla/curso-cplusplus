/* Ej. MI-16: Ingresar e informar valores, mientras que el valor ingresado no sea negativo. Informar la cantidad de valores ingresados. */
#include <iostream>

using namespace std;

int main()
{
    int cont=0, valores;
    do{
        cout<<"Ingrese un valor: ";
        cin>>valores;
        cont++;
    }while(valores>0);

    cout<<"La cantidad de valores que se ingresaron fueron: "<<cont;
    return 0;
}
