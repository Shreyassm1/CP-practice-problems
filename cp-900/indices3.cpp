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
            cin >> a[i];

        bool found = false;
        int i = 0, j = 0, k = 0;

        for (int idx = 1; idx < n - 1; idx++)
        {
            i = idx - 1;
            j = idx;
            k = idx + 1;

            if (a[i] < a[j] && a[j] > a[k])
            {
                cout << "YES\n";
                cout << i + 1 << " " << j + 1 << " " << k + 1 << "\n";
                found = true;
                break;
            }
        }

        if (!found)
            cout << "NO\n";
    }
    return 0;
}
