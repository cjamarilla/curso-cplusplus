/*
Dado un conjunto de Nombres y Fechas de nacimientos (AAAAMMDD),
que finaliza con un Nombre = ‘FIN’,
informar el nombre de la persona con mayor edad y el de la más joven.
*/
#include <iostream>

using namespace std;

int main()
{
    string nombres,n_mayor,n_menor;
    int fecha_Nacimiento,fecha_Anterior;
    fecha_Anterior=0;
    do{
        cout<<"Ingrese el nombre : ";
        cin>>nombres;
        cout<<"Ingrese la fecha de nacimiento con el formato AAAAAMMDD: ";
        cin>>fecha_Nacimiento;
        fecha_Anterior= fecha_Nacimiento;    // 19960922 > 19950522
        if(fecha_Nacimiento > fecha_Anterior) {
            n_mayor=nombres;
        }else if(fecha_Nacimiento < fecha_Anterior) {
            n_menor=nombres;
        }
    }while(nombres != "FIN");
    cout<<"El nombre de la persona con mayor edad es : "<<n_mayor<<endl;
    cout<<"El nombre de la persona con menor edad es : "<<n_menor<<endl;
    return 0;
}
