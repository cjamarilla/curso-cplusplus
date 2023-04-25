#include <iostream>

using namespace std;
int fecha, fecha2;
int main()
{
    cout<<"Ingrese un fecha con el formato [AAAAMMDD]: ";
    cin>>fecha;
    cout<<"Ingrese un fecha con el formato [AAAAMMDD]: ";
    cin>>fecha2;
    if(fecha>fecha2){
        cout<<"La fecha mayor es: "<<fecha<<endl;
    }else if(fecha<fecha2){
            cout<<"La fecha mayor es: "<<fecha2<<endl;
    }else{
                cout<<"Las fechas son iguales";
    }

    return 0;
}
