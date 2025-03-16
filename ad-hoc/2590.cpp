#include <cstdio>

int main()
{
    int t, v[4] = {1, 7, 9, 3}, te;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &te);
        printf("%d\n", v[te % 4]);
    }
    return 0;
}
