#include <iostream>

using namespace std;
int a,b,producto;
int main()
{
    cout<<"Ingrese el valor de a: ";
    cin>>a;
    cout<<"Ingrese el valor de b: ";
    cin>>b;
    while(b>0){
        producto += a;
        b--;
    }
    cout<<"El resultado del producto es: "<<producto<<endl;
    return 0;
}
