#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        long long perfect_squares = static_cast<long long>(sqrt(n));
        long long result = n - perfect_squares;
        cout << result << endl;
    }
    return 0;
}
