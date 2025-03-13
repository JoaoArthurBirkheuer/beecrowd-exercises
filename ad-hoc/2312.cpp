#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Pais{
    string pais;
    int ouro, prata, bronze;
    Pais()
    {
        pais = "";
        ouro = prata = bronze = 0;
    }
};

bool comp(Pais p1, Pais p2)
{
    if(p1.ouro != p2.ouro) return p1.ouro > p2.ouro;
    if(p1.prata != p2.prata) return p1.prata > p2.prata;
    if(p1.bronze != p2.bronze) return p1.bronze > p2.bronze;
    return p1.pais < p2.pais;
}

int main() {

    int t;
    cin>>t;
    vector<Pais> paises;
    for(int i=0;i<t;i++)
    {
        Pais p;
        cin>>p.pais>>p.ouro>>p.prata>>p.bronze;
        paises.push_back(p);
    }
    stable_sort(paises.begin(),paises.end(),comp);
    for(Pais pa:paises)
        cout<<pa.pais<<" "<<pa.ouro<<" "<<pa.prata<<" "<<pa.bronze<<endl;

    return 0;
}
