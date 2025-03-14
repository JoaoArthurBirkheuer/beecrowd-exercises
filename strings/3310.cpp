#include <iostream>
#include <vector>
#include <algorithm>

int path(const std::vector<int>& p1, const std::vector<int>& p2) {
    bool k = true;
    int v = 0;

    for (size_t i = 0; i < p1.size(); ++i) {
        if (k) {
            if (p1[i] == 0 || (i + 1 < p1.size() && (p1[i + 1] > p1[i] || p1[i + 1] == 0))) {
                v++;
                k = false;
            }
        } else {
            if (p2[i] == 0 || (i + 1 < p2.size() && (p2[i + 1] > p2[i] || p2[i + 1] == 0))) {
                v++;
                k = true;
            }
        }
    }
    return v;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> c(n);
    std::vector<int> f(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> c[i];
    }
    for (int i = 0; i < n; ++i) {
        std::cin >> f[i];
    }

    std::cout << std::min(path(c, f), path(f, c)) << std::endl;

    return 0;
}
