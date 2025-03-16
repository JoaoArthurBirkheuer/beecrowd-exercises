#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(string s1, string s2)
{
    for(int i=0;i<s1.length();i++) s1[i] = tolower(s1[i]);
    for(int i=0;i<s2.length();i++) s2[i] = tolower(s2[i]);
    return s1 < s2;
}
int main() {

    string s;
    vector<string> nomes;
    while(getline(cin,s)) nomes.push_back(s);
    stable_sort(nomes.begin(),nomes.end(),compare);
    cout<<nomes[nomes.size()-1]<<endl;

    return 0;
}
