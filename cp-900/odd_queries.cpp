#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n), pref(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            pref[i + 1] = pref[i] + a[i];
        }

        long long old_sum = pref[n];

        while (q--)
        {
            long long l, r, k;
            cin >> l >> r >> k;

            long long removed = pref[r] - pref[l - 1];
            long long added = (r - l + 1) * k;

            long long total = old_sum - removed + added;
            cout << (total % 2 ? "YES\n" : "NO\n");
        }
    }
}