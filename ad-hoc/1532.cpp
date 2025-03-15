#include <iostream>

using namespace std;

int main()
{

    int d, v;
    while (cin>>d>>v && d + v)
    {
        bool flag = false;
        for (int k = v; k >= 1; k--)
        {
            int temp = 0;
            while (v)
            {
                for (int i = 0; i < v; i++)
                {
                    temp += v;
                    if (temp == d)
                    {
                        printf("possivel\n");
                        flag = true;
                        break;
                    }
                }
                if (flag)
                    break;
                v--;
            }
            if (flag)
                break;
            v = k;
        }
        if (!flag)
            printf("impossivel\n");
    }
    return 0;
}
