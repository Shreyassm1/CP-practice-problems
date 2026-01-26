#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int ones = 0;
        int zeros = 0;
        for (char c : s)
        {
            if (c == '0')
                zeros++;
            else
                ones++;
        }
        int mn = min(ones, zeros);
        (mn % 2 == 0) ? cout << "NET" : cout << "DA";
        cout << "\n";
    }
    return 0;
}