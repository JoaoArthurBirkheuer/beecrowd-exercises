#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    int N;
    cin >> N;
    cin.ignore();
    vector<string> texts(N);
    vector<string> words(N);

    for (int i = 0; i < N; ++i) {
        getline(cin, texts[i]);
        getline(cin, words[i]);
    }

    for (int i = 0; i < N; ++i) {
        const string& text = texts[i];
        const string& word = words[i];
        vector<size_t> positions;
        size_t pos = text.find(word);

        if (pos == string::npos) {
            cout << -1 << endl;
            continue;
        }
        while (pos != string::npos) {
            bool is_word = true;
            if (pos != 0 && text[pos-1] != ' ') is_word = false;
            if (pos + word.length() < text.length() &&
                text[pos + word.length()] != ' ') is_word = false;

            if (is_word) {
                positions.push_back(pos);
            }
            pos = text.find(word, pos + 1);
        }

        if (positions.empty()) {
            cout << -1 << endl;
        } else {
            for (size_t j = 0; j < positions.size(); ++j) {
                if (j > 0) cout << " ";
                cout << positions[j];
            }
            cout << endl;
        }
    }
    return 0;
}
