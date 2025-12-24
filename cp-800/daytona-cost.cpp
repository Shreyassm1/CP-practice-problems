#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n >> a;
        bool check = false;
        for (int i = 0; i < n; i++)
        {
            int b;
            cin >> b;
            if (b == a)
                check = true;
        }
        if (check)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}