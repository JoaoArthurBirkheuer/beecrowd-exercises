#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int x, valor;
    cin >> x;

    vector<int> valores;
    vector<int> vezes;

    for (int i = 0; i < x; i++) {
        cin >> valor;
        auto it = find(valores.begin(), valores.end(), valor);
        if (it != valores.end()) {
            int index = distance(valores.begin(), it);
            vezes[index]++;
        } else {
            valores.push_back(valor);
            vezes.push_back(1);
        }
    }

    int temp = valores.size(), menor;
    for (int i = 0; i < temp; i++) {
        menor = 999999;
        int index = -1;
        for (int j = 0; j < valores.size(); j++) {
            if (menor > valores[j]) {
                menor = valores[j];
                index = j;
            }
        }
        cout << menor << " aparece " << vezes[index] << " vez(es)" << endl;
        valores.erase(valores.begin() + index);
        vezes.erase(vezes.begin() + index);
    }

    return 0;
}
