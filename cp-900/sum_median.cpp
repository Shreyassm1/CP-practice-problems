#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<long long> a(n * k);
        for (auto &x : a)
            cin >> x;
        int median = (n + 1) / 2;
        int step = n - median + 1;
        long long ans = 0;
        int j = n * k - step;
        for (int i = 0; i < k; i++)
        {
            ans += a[j];
            j -= step;
        }

        cout << ans << "\n";
    }
    return 0;
}
