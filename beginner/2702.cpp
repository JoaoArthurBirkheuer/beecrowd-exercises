#include <bits/stdc++.h>

int main() {

    int a[3] = {0}, r[3] = {0}, nr = 0;
    for(int i=0; i<3; i++) std::cin >> a[i];
    for(int i=0; i<3; i++){
        std::cin >> r[i];
        nr += a[i] < r[i] ? r[i] - a[i] : 0;
    }
    std::cout << nr << std::endl;

    return 0;
}
