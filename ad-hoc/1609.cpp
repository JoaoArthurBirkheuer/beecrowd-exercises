#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int> sheep;
   int testCases=0,i=0,j=0,num=0;
   cin>>testCases;
   while(i<testCases)
   {
       cin>>j;
       int k=0,cont=0;
       while(k<j)
       {
           cin>>num;
           if(k==0)
           {
              sheep.push_back(num);
              cont++;
           }
           else
           {
               bool igual = false;
               for(int p=0;p<sheep.size();p++)
               {
                   if(num==sheep[p])
                   {
                       igual = true;
                       break;
                   }
               }
               if(!igual)
               {
                   sheep.push_back(num);
                   cont++;
               }
           }
           k++;
       }
       cout<<cont<<endl;
       while(!sheep.empty())
       sheep.pop_back();
       i++;
   }
    return 0;
}
