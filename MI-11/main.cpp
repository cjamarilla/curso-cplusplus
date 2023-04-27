#include <iostream>

using namespace std;

int edad;

int main()
{
    cout<<"Ingrese su edad: ";
    cin>>edad;
    if(edad<=0){
        cout<<"NO NACISTE AUN"<<endl;
    }else if(edad<=12){
        cout<<"Menor"<<endl;
    }else if(edad>12 && edad<=18){
        cout<<"Cadete"<<endl;
    }else if(edad>18 && edad<=26){
        cout<<"Juvenil"<<endl;
    }else{
        cout<<"Mayor"<<endl;
    }
    return 0;
}
