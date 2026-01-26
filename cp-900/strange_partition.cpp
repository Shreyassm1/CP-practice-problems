#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        long long mnsum = 0;
        long long mxsum = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mnsum += a;
            mxsum += (a + x - 1) / x;
        }
        mnsum = (mnsum + x - 1) / x;
        cout << mnsum << " " << mxsum << "\n";
    }
    return 0;
}