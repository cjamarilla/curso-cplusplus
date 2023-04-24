#include <iostream>

using namespace std;
int aaaa,mm,dd,fecha;
int main()
{
    cout<<"Ingrese el anio: ";
    cin>>aaaa;
    cout<<"Ingrese el mes: ";
    cin>>mm;
    cout<<"Ingrese el dia: ";
    cin>>dd;
    fecha= aaaa* 10000 + mm * 100 + dd;
    cout<<"La fecha ingresada es: "<<fecha<<endl;
    return 0;
}
