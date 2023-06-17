/* Se ingresa un conjunto de valores float, cada uno de los cuales representan el sueldo de un empleado, excepto el último valor que es cero e indica el fin del conjunto. Se pide desarrollar un programa que determine e informe:
a) Cuántos empleados ganan menos $1.520.
b) Cuántos ganan $1.520 o más pero menos de $2.780.
c) Cuántos ganan $2.780 o más pero menos de $5.999.
d) Cuántos ganan $5.999 o más.
*/
#include <iostream>

using namespace std;

int main()
{
    int valores, c1=0,c2=0,c3=0,c4=0;
    do{
        cout<<"Ingrese el valor del sueldo: ";
        cin>>valores;
        if(valores < 1520){
            c1++;
        }else if((valores >= 1520) && (valores < 2578)) {
            c2++;
        } else if ((valores >= 2578) && (valores < 5999)){
            c3++;
        }else if(valores >= 5999){
            c4++;
        }
    }while(valores != 0);

    cout<<"La cantidad de empleados que ganan menos de 1520 son: "<<c1<<endl;
    cout<<"La cantidad de empleados que ganan mas de 1520 y menos de 2578 son: "<<c2<<endl;
    cout<<"La cantidad de empleados que ganan mas de 2578 y menos de 5999 son: "<<c3<<endl;
    cout<<"La cantidad de empleados que ganan mas de 5999 son: "<<c4<<endl;









    return 0;
}
