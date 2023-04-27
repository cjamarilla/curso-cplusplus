#include <iostream>

using namespace std;

int l1,l2,l3;

int main()
{

    cout<<"Ingrese el primer lado: ";
    cin>>l1;
    cout<<"Ingrese el segundo lado: ";
    cin>>l2;
    cout<<"Ingrese el tercer lado: ";
    cin>>l3;

    if(l1==l2 && l2==l3){
        cout<<"Es un triangulo equilatero";
    }else if(l1==l2 || l1==l3 || l3==l2){
        cout<<"Es un triangulo isoceles";
    }else{
        cout<<"Es un triangulo escaleno";
    }


    return 0;
}
