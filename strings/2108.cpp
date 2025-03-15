#include <iostream>
#include <string>
using namespace std;

int main() {

    string str = "", maiorStr = "";
    while(getline(cin,str))
    {
        if(str=="0")
        {
            cout<<"\nThe biggest word: "<<maiorStr<<endl;
            break;
        }
      int contEspacos = 0;
      for(int i=0;i<str.length();i++)
      if(isspace(str[i])) contEspacos++;
      string vet[contEspacos+1];
      for(int i=0,j=0;i<str.length();i++)
      {
          if(!isspace(str[i])) vet[j]+=str[i];
          else j++;
      }
      for(int i=0;i<contEspacos+1;i++)
        if(maiorStr.length()<=vet[i].length())
        maiorStr = vet[i];

      for(int i=0;i<contEspacos+1;i++)
      (i==contEspacos)?(cout<<vet[i].length()<<endl):(cout<<vet[i].length()<<"-");
    }

    return 0;
}
