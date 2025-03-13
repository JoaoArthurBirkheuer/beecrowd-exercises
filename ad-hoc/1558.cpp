#include <bits/stdc++.h> 

using namespace std;
long long pre[10001];

int main()
{
    int n;
    for (int i = 0; i < 10001; i++)
    {
        pre[i] = i*i;
    }
    while(cin >> n)
    {   if(n <0)
            cout<<"NO\n";
        else{
            int flag = 0;
            for (int i = 0; i* i <= n; i++)
            {
                for (int j = 0; j * j <= n; j++)
                {
                    if(pre[i]+pre[j] > n)
                        break;
                    if(pre[i]+pre[j] == n){
                        flag = 1;
                        break;
                    }
                }

            }
            if(flag)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }

}