#include <iostream>
#include <string>
using namespace std;

int main() {

    string numero = "";
    getline(cin,numero);
    string numeros[10] = {"0","1","2","3","4","5","6","7","8","9"};
    string palavras[10] = {"zero","um","dois","tres","quatro","cinco","seis","sete","oito","nove"};
    if(numero.length()==1)
    {
        int posic = stoi(numero);
        cout<<palavras[posic]<<endl;
    }
    else
    {
        int posic = 0;
        for(int i=0;i<10;i++)
        {
            if(numero==palavras[i])
            {
               posic = i;
               break;
            }
        }
        cout<<numeros[posic]<<endl;
    }
    return 0;
}
