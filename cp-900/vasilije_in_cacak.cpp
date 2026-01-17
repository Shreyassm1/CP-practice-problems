#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, x;
        cin >> n >> k >> x;
        if (k > n)
        {
            cout << "NO\n";
        }
        else if (1LL * k * (k + 1) > 2 * x)
        {
            cout << "NO\n";
        }
        else if (1LL * k * (2 * n - k + 1) < 2 * x)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }

    return 0;
}
