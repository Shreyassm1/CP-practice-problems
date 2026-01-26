#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (n == 1)
        {
            cout << 0 << "\n";
            continue;
        }

        int cnt2 = 0, cnt3 = 0;
        while (n % 2 == 0)
        {
            n /= 2;
            cnt2++;
        }
        while (n % 3 == 0)
        {
            n /= 3;
            cnt3++;
        }
        if (n != 1 || cnt3 < cnt2)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << (cnt3 - cnt2) + cnt3 << "\n";
        }
    }
    return 0;
}
