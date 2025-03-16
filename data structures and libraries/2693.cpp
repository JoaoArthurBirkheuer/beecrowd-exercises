#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct Aluno
{
  string nome;
  char regiao;
  int distancia;
};

bool cmp(Aluno a1, Aluno a2)
{
    string st1 = a1.nome, st2 = a2.nome;
    char r1 = a1.regiao, r2 = a2.regiao;
    int dis1 = a1.distancia, dis2 = a2.distancia;
    if(dis1 != dis2) return dis1 < dis2;
    if(r1 != r2) return r1 < r2;
    return st1 < st2;
}

int main()
{
    int t;
    string n;
    char reg;
    int dist;
    vector<Aluno> alunos;
    while(cin>>t){
        if(t == 0) break;
        string n;
        char reg;
        int dist;
        vector<Aluno> alunos;
        Aluno a;
    while(t--)
    {
       cin>>n>>reg>>dist;
       a.nome = n;
       a.regiao = reg;
       a.distancia = dist;
       alunos.push_back(a);
    }
    stable_sort(alunos.begin(),alunos.end(),cmp);
    for(Aluno al:alunos)
        cout<<al.nome<<endl;
    }
    return EXIT_SUCCESS;
}
