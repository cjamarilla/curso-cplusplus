#include <iostream>

using namespace std;

int main()
{
    int M, contador, numero;
    cout<<"Ingrese un valor: ";
    cin>>M;
    contador=0;
    numero=1;

    while(contador<M){
        if((numero % 3 == 0) && (numero % 5 !=0 )){
            cout<<numero<<endl;
            contador++;
        }
        numero++;
    }
    return 0;
}
