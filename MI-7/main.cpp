#include <iostream>

using namespace std;

int l1,l2,l3;

int main()
{
    do{
        cout<<"Ingrese 3 datos: "; cin>>l1>>l2>>l3;
        if(l1<=0 || l2<=0 || l3<=0){
            cout<<"Recuerde, que los valores ingresados tienen que ser mayor que cero"<<endl;
        }
    }while(l1<=0 || l2<=0 || l3<=0);

    if((l1 + l2 > l3)||(l2 + l3 > l1) || (l1 + l3 > l2)){
        cout<<"Forman un Triangulo";
    }


    return 0;
}
