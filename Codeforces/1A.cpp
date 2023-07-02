#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double n, m, a;
    // cout.precision(22);
    cin >> n >> m >> a;
    // float c = n % a;
    // float b = m % a;

    if (m < n)
        swap(n, m);
    if (a >= m)
    {
        cout << ceil(n / a) << endl;
    }
    else
    {
        cout << ceil(m / a) * ceil(n / a) << endl;
    }
    // int k, q;

    // if ((c / a == b / a) && n == a && m == a)
    // {
    //     cout << 1 << endl;
    // }
    // else
    // {
    //     if (c == 0)
    //         c = n / a;
    //     else
    //         c = n / a + 1;
    //     // cout << c << endl;
    //     if (b == 0)
    //         b = m / a;
    //     else
    //         b = m / a + 1;
    //     // cout << b << endl;

    //     k = c;
    //     q = b;

    //     cout << k * q << endl;
    // }

    return 0;
}