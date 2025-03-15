#include <iostream>
using namespace std;

int main() {

    string str = "";
    while(getline(cin,str))
    {
        int contSpaces = 0, posic = 0, cont = 0, contSequencia = 0;
        for(char c:str) if(c==' ') contSpaces++;
        char vet[contSpaces + 1];
        bool sequencia = false;

        for(int i=0;i<str.size();i++)
        {
            if(str[i] == ' ' || i==0)
            {
               vet[posic] = (i == 0)?(tolower(str[0])):(tolower(str[i+1]));
               posic++;
            }
        }

        char aux = vet[0];
        for(int i=0;i<contSpaces + 1;i++)
        {
           if(vet[i] == aux)
           {
               contSequencia++;
               if(contSequencia>1 && !sequencia)
               {
                  sequencia = true;
                  cont++;
               }
           }
           else
           {
               aux = vet[i];
               sequencia = false;
               contSequencia = 1;
           }
        }
        cout<<cont<<endl;
    }

    return 0;
}
