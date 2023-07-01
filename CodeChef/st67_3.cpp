#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int x, y, a, b;
        cin >> n >> x >> y >> a >> b;
        // int sn = abs(x - a) + abs(y - b);
        // int p = min(x, y);
        // int q = min(abs(n - a), abs(n - b));
        // int r = min(a, b);
        // int j = min(q, r);
        // int sf = p + j + 1;
        // int z = min(sn, sf);
        int p = min(x, n - x + 1);
        int q = min(y, n - y + 1);
        int r = min(a, n - a + 1);
        int s = min(b, n - b + 1);
        cout << min(abs(x - a) + abs(y - b), min(r, s) + min(p, q)) << endl;
    }
    return 0;
}