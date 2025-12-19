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
        int seq_count = 0;
        int dot_count = 0;
        bool check = false;
        for (int i = 0; i < n; i++)
        {
            char a;
            cin >> a;
            if (a == '.')
            {
                seq_count++;
                dot_count++;
                if (seq_count == 3)
                {
                    check = true;
                }
            }
            else
                seq_count = 0;
        }
        if (check)
            cout << 2 << endl;
        else
            cout << dot_count << endl;
    }
    return 0;
}