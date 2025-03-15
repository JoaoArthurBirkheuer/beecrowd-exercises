#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

    cout<<fixed;
    int x;
    cin>>x;
    while(x--)
    {
      float area, raio, valor;
      cin>>area;
      raio = sqrt((area/12.56));
      if(raio<12.00)
      {
          valor = area*0.09;
          cout<<"vermelho = R$ "<<setprecision(2)<<valor<<endl;
      }
      else if(raio>=12.00&&raio<=15.00)
      {
          valor = area*0.07;
          cout<<"azul = R$ "<<setprecision(2)<<valor<<endl;
      }
      else
      {
          valor = area*0.05;
          cout<<"amarelo = R$ "<<setprecision(2)<<valor<<endl;
      }

    }
    return 0;
}
