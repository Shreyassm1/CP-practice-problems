#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, n;
        cin >> x >> n;
        long long r = n % 4;
        long long d = 0;
        if (r == 1)
            d = n;
        else if (r == 2)
            d = -1;
        else if (r == 3)
            d = -(n + 1);
        if (x % 2 == 0)
            x -= d;
        else
            x += d;
        cout << x << "\n";
    }
    return 0;
}