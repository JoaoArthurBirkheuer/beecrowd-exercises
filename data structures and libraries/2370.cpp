#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct Aluno {
    string nome;
    int habilidade;
    bool operator<(const Aluno& other) const {
        return habilidade > other.habilidade;
    }
};

int main() {
    int N, T;
    cin >> N >> T;

    vector<Aluno> alunos(N);

    for (int i = 0; i < N; i++) {
        cin >> alunos[i].nome >> alunos[i].habilidade;
    }
    sort(alunos.begin(), alunos.end());
    vector<vector<string>> times(T);

    for (int i = 0; i < N; i++) {
        times[i % T].push_back(alunos[i].nome);
    }
    for (int i = 0; i < T; i++) {
        sort(times[i].begin(), times[i].end());
    }

    for (int i = 0; i < T; i++) {
        cout << "Time " << i + 1 << endl;
        for (const string& nome : times[i]) {
            cout << nome << endl;
        }
        cout << endl;
    }

    return 0;
}
