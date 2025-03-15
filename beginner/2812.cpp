#include <bits/stdc++.h>

using namespace std;

int main() {

    int x, tam = 0, num = 0;
    vector<int> numeros;
    cin>>x;
    while(x--)
    {
        cin>>tam;
        for(int i=0;i<tam;i++) {
            cin>>num;
            if(num%2!=0) numeros.push_back(num);
        }
        if(numeros.size()==0)
        {
            cout<<endl;
            continue;
        }
        int maior = 0, menor = 9999;
        bool procuraMaior = true, ultimoNum = false;
        while(numeros.size()!=0)
        {
          int index = 0;
          if(procuraMaior)
          {
              if(numeros.size()==1) ultimoNum = true;
             for(int i=0;i<numeros.size();i++)
             {
                 if(numeros[i]>maior)
                 {
                     index = i;
                     maior = numeros[i];
                 }
             }
             (ultimoNum == true)?(cout<<numeros[index]<<endl):(cout<<numeros[index]<<" ");
             numeros.erase(numeros.begin()+index);
             procuraMaior = !procuraMaior;
             menor = 9999;
          }
          else
          {
              if(numeros.size()==1) ultimoNum = true;
             for(int i=0;i<numeros.size();i++)
             {
                 if(numeros[i]<menor)
                 {
                     index = i;
                     menor = numeros[i];
                 }
             }
             (ultimoNum == true)?(cout<<numeros[index]<<endl):(cout<<numeros[index]<<" ");
             numeros.erase(numeros.begin()+index);
             procuraMaior = !procuraMaior;
             maior = 0;
          }
        }
    }


    return 0;
}
