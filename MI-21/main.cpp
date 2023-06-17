//Dados N valores informar el mayor, el menor y en que posición del conjunto fueron ingresados.
#include <iostream>

using namespace std;

int main()
{
    int n, valores, mayor, menor, pos, pos_Mayor,pos_Menor;
    mayor=0;
    menor=9999;
    pos=0;
    pos_Mayor=0;
    pos_Menor=0;
    cout<<"Ingrese cuantos valores desea ingresar: ";
    cin>>n;
    while (pos != n) {
        cout<<"Ingrese un valor: ";
        cin>>valores;
        if(valores > mayor){
            mayor=valores;
            pos_Mayor=pos+1;
        }else if(valores < menor){
            menor= valores;
            pos_Menor=pos+1;
        }
        pos++;
    }
    cout<<"El valor mas grande de los ingresados es: "<<mayor<<" en la posicion : "<<pos_Mayor<<endl;
    cout<<"El valor mas pequeño de los ingresados es: "<<menor<<" en la posicion : "<<pos_Menor<<endl;
    return 0;
}
