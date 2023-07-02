#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n, ct = 0;
    // cin >> n;
    // int a, b, c, d, e, f, g, h, i;
    // cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;
    // if (a + d + e != 0)
    // {
    //     ct++;
    // }
    // else if (b + e + h != 0)
    // {
    //     ct++;
    // }
    // else if (c + f + i != 0)
    // {
    //     ct++;
    // }
    // else
    // {
    //     ct = 0;
    // }
    // if (ct > 0)
    //     cout << "NO" << endl;
    // else
    //     cout << "YES" << endl;

    int n, x, y, z, xsum(0), ysum(0), zsum(0);
    cin >> n;

    while (n--)
    {
        cin >> x >> y >> z;
        xsum += x;
        ysum += y;
        zsum += z;
    }

    if (xsum == 0 && ysum == 0 && zsum == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}