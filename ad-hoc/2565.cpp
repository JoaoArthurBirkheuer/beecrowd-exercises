#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cout << fixed << setprecision(2);
    int t;

    while (cin >> t) {
        vector<double> v(t);
        for (int i = 0; i < t; i++) {
            cin >> v[i];
        }
        double min_cost = 1e9;

        // Testa todos os valores entre o mínimo e o máximo dos tubos
        for (double k = 0; k <= 100.0; k += 0.01) {
            double cost = 0.0;
            for (int i = 0; i < t; i++) {
                cost += abs(v[i] - k);
            }
            min_cost = min(min_cost, cost);
        }

        cout << min_cost << endl;
    }

    return 0;
}
