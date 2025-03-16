#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int t,totalPokemon = 151;
    vector<string> pokemons;
    string pokemon;
    vector<string>::iterator it;
    cin>>t;
    cin.ignore();
    while(t--)
    {
       getline(cin,pokemon);
       it = find(pokemons.begin(),pokemons.end(),pokemon);
       if(it == pokemons.end())
       {
           totalPokemon--;
           pokemons.push_back(pokemon);
       }
    }
    cout<<"Falta(m) "<<totalPokemon<<" pomekon(s).\n";

    return 0;
}
