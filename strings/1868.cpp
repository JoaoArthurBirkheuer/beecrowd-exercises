#include <iostream>
#include <vector>
#include <string>

void mostrar_solucao(const std::vector<std::vector<char>>& g) {
    int tamanho = g.size();
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            std::cout << g[i][j];
        }
        std::cout << "\n";
    }
    std::cout << "@\n";
}

bool mover(int iter, int dir, int& x, int& y, std::vector<std::vector<char>>& g) {
    bool flag = true;
    int tm = g.size();
    int dx[] = {0, -1, 0, 1};
    int dy[] = {1, 0, -1, 0};

    for (int j = 0; j < iter; j++) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (nx >= 0 && nx < tm && ny >= 0 && ny < tm) {
            g[x][y] = 'O';
            x = nx;
            y = ny;
            g[x][y] = 'X';
            mostrar_solucao(g);
        } else {
            flag = false;
            break;
        }
    }
    return flag;
}

void solucao(int n) {
    std::vector<std::vector<char>> g(n, std::vector<char>(n, 'O'));
    int x = n / 2;
    int y = n / 2;

    g[x][y] = 'X';
    mostrar_solucao(g);

    bool condicao = true;
    int iter = 0;

    while (condicao) {
        iter++;
        if (condicao && !mover(iter, 0, x, y, g)) {
            condicao = false;
        }

        if (condicao && !mover(iter, 1, x, y, g)) {
            condicao = false;
        }

        iter++;
        if (condicao && !mover(iter, 2, x, y, g)) {
            condicao = false;
        }

        if (condicao && !mover(iter, 3, x, y, g)) {
            condicao = false;
        }
    }
}

int main() {
    int n;
    while (true) {
        std::cin >> n;
        if (n == 0) break;
        solucao(n);
    }
    return 0;
}
