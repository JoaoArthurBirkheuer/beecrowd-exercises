#include <iostream>
#include <queue>
using namespace std;

const int dx[] = {1, -1, 0, 0, 1, 1, -1, -1}; ///8 possiveis movimentos
const int dy[] = {0, 0, 1, -1, 1, -1, 1, -1}; ///8 possiveis movimentos

bool is_valid(int x, int y, int n, int m, vector<vector<int>>& mat) {
    return x >= 0 && x < n && y >= 0 && y < m && mat[x][y] == 0;
}

int bfs(int startX, int startY, int n, int m, vector<vector<int>>& mat) {
    queue<pair<int, int>> q;
    q.push({startX, startY});
    mat[startX][startY] = 1;

    int painted = 0;

    while (!q.empty()) {
        auto [x, y] = q.front();

        q.pop();
        painted++;

        for (int i = 0; i < 8; i++) {
            int newX = x + dx[i];
            int newY = y + dy[i];

            if (is_valid(newX, newY, n, m, mat)) {
                mat[newX][newY] = 1;  // Marca como pintado
                q.push({newX, newY});
            }
        }
    }
    return painted;
}

int main() {
    int n, m, x, y, k;
    cin >> n >> m >> x >> y >> k;

    vector<vector<int>> mat(n, vector<int>(m, 0));

    for (int i = 0; i < k; i++) {
        int filledX, filledY;
        cin >> filledX >> filledY;
        mat[n - filledX][filledY - 1] = 2;
    }

    int result = bfs(n - x, y - 1, n, m, mat);

    cout << result << endl;

    return 0;
}
