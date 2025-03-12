#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    while (std::cin >> n && n != 0) {
        std::vector<int> v1(n), v2(n);
        for (int i = 0; i < n; i++) v1[i] = i + 1;

        int att = 0;
        do {
            for (int i = 0; i < n; i++) {
                std::cin >> v2[i];
            }
            att++;
        } while (!std::equal(v1.begin(), v1.end(), v2.begin()));

        std::cout << att << std::endl;
    }
    return 0;
}
