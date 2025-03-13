#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const pair<string, vector<int>>& a, const pair<string, vector<int>>& b) {

    if (a.second[0] != b.second[0])
        return a.second[0] > b.second[0];
    if (a.second[1] != b.second[1])
        return a.second[1] > b.second[1];
    if (a.second[2] != b.second[2])
        return a.second[2] > b.second[2];

    return a.first < b.first;
}

int main() {

     string modalidade, pLugar, sLugar, tLugar;
     map<string, vector<int>> paisesMedalhas;
     while(getline(cin,modalidade))
     {
         getline(cin,pLugar);
         if(paisesMedalhas.find(pLugar) == paisesMedalhas.end())
            paisesMedalhas[pLugar] = {0,0,0};
        paisesMedalhas[pLugar][0]++;

        getline(cin,sLugar);
        if(paisesMedalhas.find(sLugar) == paisesMedalhas.end())
            paisesMedalhas[sLugar] = {0,0,0};
        paisesMedalhas[sLugar][1]++;

        getline(cin,tLugar);
        if(paisesMedalhas.find(tLugar) == paisesMedalhas.end())
            paisesMedalhas[tLugar] = {0,0,0};
        paisesMedalhas[tLugar][2]++;
     }
     //stable_sort só pode ser usado com vector
     //é preciso passar os valores para um vector de par
     //elementos do par: string e vector de 3 posições
     vector<pair<string, vector<int>>> paisesVec(paisesMedalhas.begin(), paisesMedalhas.end());
     stable_sort(paisesVec.begin(),paisesVec.end(),cmp);
    cout<<"Quadro de Medalhas\n";
    for (const auto& pais : paisesVec) {
        cout << pais.first << " " << pais.second[0] << " " << pais.second[1] << " " << pais.second[2] << endl;
    }
    return 0;
}
