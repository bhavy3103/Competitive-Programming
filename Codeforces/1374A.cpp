#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x, y, k, p;
        cin >> x >> y >> k;
        p = k - k % x + y;
        if (p <= k)
        {
            cout << p << endl;
        }
        else
        {
            if (k % x == y)
            {
                cout << k << endl;
            }
            else
            {
                cout << (k - k % x - (x - y)) << endl;
            }
        }
    }
    return 0;
}