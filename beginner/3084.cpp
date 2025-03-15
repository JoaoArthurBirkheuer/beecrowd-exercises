#include <iostream>

using namespace std;

int main() {

    int anguloH, anguloM;
    int horas, minutos;
    while(cin>>anguloH>>anguloM)
    {
       horas = anguloH/30, minutos = anguloM/6;
       (horas>=10)?(cout<<horas<<":"):(cout<<"0"<<horas<<":");
       (minutos>=10)?(cout<<minutos<<endl):(cout<<"0"<<minutos<<endl);
    }
    return 0;
}
