#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;



int main(){
    int menores=0,mayores=0,sum_mayores=0,sum_menores=0,aleatorio;
    float promedio;

    srand(time(NULL));

    for(int i=0; i<=50; i++){
        aleatorio=rand()%2000 - 450;
    if(aleatorio>100){
        sum_mayores+=aleatorio;
        mayores++;
    }
    if(aleatorio<-10){
        sum_menores+=aleatorio;
        menores++;
    }
    }
    if(mayores > 0){
    promedio= sum_mayores / mayores;
    }
    cout<<"El promedio de los numero mayores que 100: "<<promedio<<endl;
    cout<<"La suma de los numeros menores que -10: "<<sum_menores<<endl;
    return 0;
}
