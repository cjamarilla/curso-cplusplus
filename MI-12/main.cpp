#include <iostream>

using namespace std;
int sumatoria=0;
int main()
{
    for(int i=0; i<=100; i++){
        sumatoria+=i;
    }
    cout<<"La sumatoria de los primeros 100 numeros naturales es: "<<sumatoria<<endl;
    return 0;
}
