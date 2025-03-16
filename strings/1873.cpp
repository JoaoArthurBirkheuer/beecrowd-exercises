#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

string determinarVencedor(const string& escolhaRajesh, const string& escolhaSheldon) {

    unordered_map<string, unordered_map<string, string>> regras = {
        {"pedra", {{"tesoura", "rajesh"}, {"lagarto", "rajesh"}, {"papel", "sheldon"}, {"spock", "sheldon"}}},
        {"papel", {{"pedra", "rajesh"}, {"spock", "rajesh"}, {"tesoura", "sheldon"}, {"lagarto", "sheldon"}}},
        {"tesoura", {{"papel", "rajesh"}, {"lagarto", "rajesh"}, {"pedra", "sheldon"}, {"spock", "sheldon"}}},
        {"lagarto", {{"papel", "rajesh"}, {"spock", "rajesh"}, {"pedra", "sheldon"}, {"tesoura", "sheldon"}}},
        {"spock", {{"tesoura", "rajesh"}, {"pedra", "rajesh"}, {"lagarto", "sheldon"}, {"papel", "sheldon"}}}
    };

    if (escolhaRajesh == escolhaSheldon) {
        return "empate";
    }

    if (regras[escolhaRajesh].find(escolhaSheldon) != regras[escolhaRajesh].end()) {
        return regras[escolhaRajesh][escolhaSheldon];
    }

    return "empate";
}

int main() {
    int C;
    cin >> C;

    while (C--) {
        string escolhaRajesh, escolhaSheldon;
        cin >> escolhaRajesh >> escolhaSheldon;

        cout << determinarVencedor(escolhaRajesh, escolhaSheldon) << endl;
    }

    return 0;
}
