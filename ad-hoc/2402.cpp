#include <cstdio>

int main() {
    unsigned long long N;
    scanf("%llu", &N);

    if (N < 4) {
        printf("N\n");
        return 0;
    }

    bool canFormRectangle = false;

    for (unsigned long long i = 2; i * i <= N; ++i) {
        if (N % i == 0) {
            canFormRectangle = true;
            break;
        }
    }

    printf(canFormRectangle ? "S\n" : "N\n");

    return 0;
}
