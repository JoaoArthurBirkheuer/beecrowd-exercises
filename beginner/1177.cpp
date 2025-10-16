#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int T;
    if (!(std::cin >> T)) return 0;

    const int ARRAY_SIZE = 1000;
    int N[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; ++i) {
        N[i] = i % T;
        std::cout << "N[" << i << "] = " << N[i] << "\n";
    }

    return 0;
}