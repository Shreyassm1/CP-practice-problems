#include <iostream>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int a, b, xk, yk, xq, yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;
        int dx[8] = {b, a, -a, -b, a, b, -a, -b};
        int dy[8] = {a, b, -b, -a, -b, -a, b, a};
        int cnt = 0;
        for (int i = 0; i < 8; i++) {
            int nx = xk + dx[i], ny = yk + dy[i];
            if ((abs(nx - xq) == a && abs(ny - yq) == b) ||
                (abs(nx - xq) == b && abs(ny - yq) == a))
                cnt++;
        }
        cout << (a == b ? cnt / 2 : cnt) << '\n';
    }
    return 0;
}
