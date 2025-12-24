#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        string sn, sm;
        cin >> sn;
        cin >> sm;

        string cur = sn;
        int steps = 0;
        bool found = false;

        while ((int)cur.size() < m + n)
        {
            if (cur.find(sm) != string::npos)
            {
                found = true;
                break;
            }
            cur += cur;
            steps++;
        }
        if (!found && cur.find(sm) != string::npos)
            found = true;

        if (found)
            cout << steps << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
