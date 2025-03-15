#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int x,num;
    cin>>x;
    vector<int> pares;
    vector<int> impares;
    for(int i=0;i<x;i++)
    {
      cin>>num;
      if(num%2==0) pares.push_back(num);
      else impares. push_back(num);
    }
    sort(pares.begin(),pares.end());
    sort(impares.begin(),impares.end(),greater<int>());
    for(int i=0;i<pares.size();i++) cout<<pares[i]<<endl;
    for(int i=0;i<impares.size();i++) cout<<impares[i]<<endl;
    return 0;
}
