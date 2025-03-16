#include <cstdio>

int main()
{
    int t, te;
    double d = 1;
    char character;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %c", &te, &character);
        if(character == '*') d *= te;
        else d /= te;

    }
    printf("%.0f\n", d);
    return 0;
}
