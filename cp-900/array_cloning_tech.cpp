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
        vector<long long> a(n);
        map<long long, long long> umap;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            umap[a[i]]++;
        }
        long long h_f = 0;
        for (auto &p : umap)
            h_f = max(h_f, p.second);
        int ops = 0;
        while (n - h_f > 0)
        {
            ops++;
            if (h_f * 2 <= n)
            {
                ops += h_f;
                h_f *= 2;
            }
            else
            {
                ops += (n - h_f);
                h_f = n;
            }
        }

        cout << ops << "\n";
    }
    return 0;
}