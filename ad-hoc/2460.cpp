#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int tfi, v, td;

    cin >> tfi;
    vector<int> inicial(tfi);

    for(int i = 0; i < tfi; i++) {
        cin >> inicial[i];
    }

    cin >> td;
    unordered_set<int> desistentes;

    for(int i = 0; i < td; i++) {
        cin >> v;
        desistentes.insert(v);
    }

    vector<int> aux;

    for(int i = 0; i < tfi; i++) {
        if(desistentes.find(inicial[i]) == desistentes.end()) {
            aux.push_back(inicial[i]);
        }
    }

    for(size_t i = 0; i < aux.size(); i++) {
        cout << aux[i];
        if (i < aux.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
