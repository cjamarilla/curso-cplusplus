#include <iostream>

using namespace std;
int fecha,aaaa,mm,dd;
int main()
{
    cout<<"Ingrese la fecha con el formato [AAAA/MM/DD]: ";
    cin>>fecha;
    aaaa= fecha / 10000;
    mm= (fecha % 10000) / 100;
    dd= fecha % 100;
    cout<<"Datos.."<<endl;
    cout<<"Anios: "<<aaaa<<endl;
    cout<<"Meses: "<<mm<<endl;
    cout<<"Dias: "<<dd<<endl;
    return 0;
}
