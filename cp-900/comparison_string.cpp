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
        int count = 2;
        int ans = INT_MIN;
        char prev = '.';
        for (int i = 0; i < n; i++)
        {
            char a;
            cin >> a;
            if (a != prev)
            {
                ans = max(ans, count);
                prev = a;
                count = 2;
                continue;
            }
            count++;
        }
        ans = max(ans, count);
        cout << ans << "\n";
    }
    return 0;
}