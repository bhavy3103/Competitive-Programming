#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c, p, q, z;
        cin >> a >> b >> c;
        // p = max(a, max(b, c));
        // q = min(a, min(b, c));
        // z = a + b + c;
        // z = z - p - q;
        // if (z % q == 0 && p % q == 0)
        // {
        //     if ((z == 2 && q == 1) && ((z == q) && q != p))
        //         cout << "NO" << endl;
        //     else
        //         cout << "YES" << endl;
        // }
        // else
        //     cout << "NO" << endl;
        if ((2 * b - c > 0) && (2 * b - c) % a == 0)
            cout << "YES" << endl;
        else if ((a + c) % (2 * b) == 0)
            cout << "YES" << endl;
        else if ((2 * b - a > 0) && (2 * b - a) % c == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}