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
        bool check = false;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (i == 0 && a == 1)
                check = true;
        }
        if (check)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}