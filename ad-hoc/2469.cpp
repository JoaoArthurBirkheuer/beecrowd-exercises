#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int N, v;
    cin >> N;
    vector<int> grades(N);
    unordered_map<int, int> freq_map;

    for (int i = 0; i < N; i++) {
        cin >> grades[i];
        freq_map[grades[i]]++;
    }

    int most_frequent_grade = grades[0];
    int max_frequency = freq_map[grades[0]];

    for (const auto& grade : grades) {
        if (freq_map[grade] > max_frequency ||
            (freq_map[grade] == max_frequency && grade > most_frequent_grade)) {
            most_frequent_grade = grade;
            max_frequency = freq_map[grade];
        }
    }

    cout << most_frequent_grade << endl;
    return 0;
}
