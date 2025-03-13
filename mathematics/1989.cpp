#include <iostream>
#include <vector>

using namespace std;

int main() {
    while (true) {
        int N, M;
        cin >> N >> M;
        
        if (N == -1 && M == -1) {
            break;
        }

        vector<int> chapters(N);
        for (int i = 0; i < N; i++) {
            cin >> chapters[i];
        }

        long long totalMinutes = 0;
        long long cumulativeChapters = 0;

        for (int i = 0; i < N; i++) {
            totalMinutes += cumulativeChapters * M;
            cumulativeChapters += chapters[i];
        }

        totalMinutes += cumulativeChapters * M;

        cout << totalMinutes << endl;
    }

    return 0;
}