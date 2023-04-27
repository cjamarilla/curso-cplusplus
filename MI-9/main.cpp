#include <iostream>

using namespace std;

int aaaa,mm;
bool bisiesto;

void menu(){
cout<<"Ingrese un anio: ";
cin>>aaaa;
cout<<"Ingrese el mes que desea saber los dias: ";
cin>>mm;
}

int main()
{
    menu();
    if ((aaaa % 4 == 0 && aaaa % 100 != 0) || aaaa % 400 == 0) {
        bisiesto= true;
    }
    switch (mm) {
        case 2:
            if(bisiesto == true){
            cout << "tiene 29 dias " << endl;
            }else{
                cout<<"Tiene 28 dias "<<endl;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout <<" tiene 30 dias." << endl;
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << " tiene 31 dias." << endl;
            break;
        default:
            cout << "El numero ingresado no es valido." << endl;
            break;
    }

    return 0;
}
