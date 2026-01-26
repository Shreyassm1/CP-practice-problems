#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int n0 = 0;
        int n1 = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a == 0)
                n0++;
            if (a == 1)
                n1++;
        }
        long long ans = n1 * pow(2, n0);
        cout << ans << "\n";
    }
    return 0;
}