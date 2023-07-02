#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int p = max(a, b);
        int p1 = min(a, b);
        int q = max(c, d);
        int q1 = min(c, d);
        int ct = 0;
        if (p < q1 || p1 > q)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}