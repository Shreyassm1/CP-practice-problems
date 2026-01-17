#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> x(n);
        for (int i = 0; i < n; i++)
            cin >> x[i];
        sort(x.begin(), x.end());
        long long ans = b;
        for (int tool : x)
            ans += min(a - 1, tool);
        cout << ans << "\n";
    }
    return 0;
}