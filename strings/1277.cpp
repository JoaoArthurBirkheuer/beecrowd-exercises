#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int stQt;
        cin >> stQt;
        if (stQt == 0) {
            cout << endl;
            continue;
        }
        vector<string> students(stQt);
        vector<bool> notOk(stQt);
        for (int i = 0; i < stQt; i++) cin >> students[i];
        for (int i = 0; i < stQt; i++)
        {
            string attendance;
            cin >> attendance;
            int totalClasses = attendance.length();
            int medical = count(attendance.begin(), attendance.end(), 'M');
            int present = count(attendance.begin(), attendance.end(), 'P');
            int effectiveClasses = totalClasses - medical;
            float attendancePercentage = effectiveClasses > 0 ? (present * 100.0 / effectiveClasses) : 0.0;
            notOk[i] = attendancePercentage < 75.0;
        }

        bool printed = false;
        for (int i = 0; i < stQt; i++)
        {
            if (notOk[i])
            {
                if (printed) cout << " ";
                cout << students[i];
                printed = true;
            }
        }
        cout << endl;
    }
    return 0;
}