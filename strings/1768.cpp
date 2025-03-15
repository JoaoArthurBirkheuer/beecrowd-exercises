#include <iostream>

using namespace std;

int main() {

   int x;
   while(cin>>x)
   {
       int contEspacos=x/2, auxEspacos = contEspacos, asteriscos = 1;
       int auxAsteriscos = asteriscos;
       for(int i=0;i<contEspacos+1;i++)
       {
           for(int j=0;j<auxEspacos;j++) cout<<" ";
           for(int k=0;k<auxAsteriscos;k++) cout<<"*";
           auxEspacos--;
           auxAsteriscos+=2;
           cout<<endl;
       }
       for(int i=0;i<contEspacos;i++)cout<<" ";
       cout<<"*"<<endl;
       contEspacos--;
       for(int i=0;i<contEspacos;i++)cout<<" ";
       cout<<"***"<<endl<<endl;
   }

    return 0;
}
