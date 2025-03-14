#include <iostream>
#include <vector>
#include <map>
#include <limits>

using namespace std;

int KnapsackRecursive(const vector<pair<int, int>>& products, int maxWeight, int index, vector<vector<int>>& memo) {
    if (index == products.size() || maxWeight == 0) {
        return 0;
    }
    
    if (memo[index][maxWeight] != -1) {
        return memo[index][maxWeight];
    }

    int price = products[index].first;
    int weight = products[index].second;

    if (weight > maxWeight) {
        return memo[index][maxWeight] = KnapsackRecursive(products, maxWeight, index + 1, memo);
    }

    int include = price + KnapsackRecursive(products, maxWeight - weight, index + 1, memo);
    int exclude = KnapsackRecursive(products, maxWeight, index + 1, memo);

    return memo[index][maxWeight] = max(include, exclude);
}

int main() {
    int t;
    while (cin >> t) {
        if (t == 0) break;

        vector<pair<int, int>> products;
        for (int i = 0; i < t; ++i) {
            int price, weight;
            cin >> price >> weight;
            products.emplace_back(price, weight);
        }

        int maxWeight;
        cin >> maxWeight;

        vector<vector<int>> memo(products.size(), vector<int>(maxWeight + 1, -1));
        cout << KnapsackRecursive(products, maxWeight, 0, memo) << endl;
    }
    return 0;
}
