#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int x,y;
    while(cin>>x>>y)
    {
      int cont = 0;
      for(int i=x;i<=y;i++)
      {
          string str = to_string(i);
          if(count(str.begin(),str.end(),'0')>1||count(str.begin(),str.end(),'1')>1||
             count(str.begin(),str.end(),'2')>1||count(str.begin(),str.end(),'3')>1||
             count(str.begin(),str.end(),'4')>1||count(str.begin(),str.end(),'5')>1||
             count(str.begin(),str.end(),'6')>1||count(str.begin(),str.end(),'7')>1||
             count(str.begin(),str.end(),'8')>1||count(str.begin(),str.end(),'9')>1)
          continue;
          else cont++;
      }
      cout<<cont<<endl;
    }

    return 0;
}
