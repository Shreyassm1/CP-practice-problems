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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = a[0] == 0 ? 0 : 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] != 0 and a[i - 1] == 0)
                ans++;
        }
        cout << min(ans, 2) << endl;
    }
}