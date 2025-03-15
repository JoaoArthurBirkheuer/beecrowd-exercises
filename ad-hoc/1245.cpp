#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int N;
    while (cin >> N) {
        int sizes[61][2];
        memset(sizes, 0, sizeof(sizes));

        int total_pairs = 0;

        for (int i = 0; i < N; ++i) {
            int size;
            char side;
            cin >> size >> side;
            if (side == 'D')
                ++sizes[size][0];
            else
                ++sizes[size][1];
        }

        for (int i = 30; i <= 60; ++i) {
            total_pairs += min(sizes[i][0], sizes[i][1]);
        }

        cout << total_pairs << endl;
    }

    return 0;
}
