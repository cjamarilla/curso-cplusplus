#include <iostream>

using namespace std;
int n,n2;
int main()
{
    cout<<"Ingrese un numero: ";
    cin>>n;
    cout<<"Ingrese otro numero: ";
    cin>>n2;
    if(n>n2){
        cout<<"El numero mayor es: "<<n<<endl;
    }else if(n<n2){
            cout<<"El numero mayor es: "<<n2<<endl;
        }else{
                cout<<"Los numeros son iguales";
        }
    return 0;
}
