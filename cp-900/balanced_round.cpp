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
        int l = 1;
        vector<int> a(n);
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] > k)
            {
                ans = min(ans, n - l);
                l = 1;
            }
            else
                l++;
        }
        ans = min(ans, n - l);
        (l == n) ? cout << 0 << "\n" : cout << ans << "\n";
    }
    return 0;
}