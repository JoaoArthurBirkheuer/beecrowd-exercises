#include <iostream>
#include <vector>

using namespace std;

int main() {
    int A, C;
    while (cin >> A >> C && (A != 0 || C != 0)) {
        vector<int> X(C);
        for (int i = 0; i < C; ++i)
            cin >> X[i];

        int total_turns = 0;
        int current_height = A;

        for (int i = 0; i < C; ++i) {
            if (X[i] < current_height) {
                total_turns += current_height - X[i];
            }
            current_height = X[i];
        }

        cout << total_turns << endl;
    }

    return 0;
}
