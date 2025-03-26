#include <bits/stdc++.h>

int main()
{
    // Modular Arithmetic
    // Pigeonhole Principle
    int a, s, t;
    while (scanf("%d", &t) != EOF) {
        int a = 1, b = 1, c = 0;
        while (a) {
            a = b % t;
            b = (b * 10 + 1) % t;
            c++;
        }
        printf("%d\n", c);
    }
    return 0;
}
