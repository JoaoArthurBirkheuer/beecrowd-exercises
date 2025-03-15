#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {

   int n,m,cont=0,var=0;
   while(cin>>n>>m)
   {
       if(n==0&&m==0) break;
   vector<int> teste;
   vector<int> v;
   for(int i=0;i<m;i++)
   {
       cin>>var;
       v.push_back(var);
   }
    for(int i=0;i<m;i++){
        if(count(v.begin(),v.end(),v[i])>1&&find(teste.begin(), teste.end(), v[i]) == teste.end())
        {
           cont++;
           teste.push_back(v[i]);
        }
    }
    cout<<cont<<endl;
    cont=0;
   }
    return 0;
}
