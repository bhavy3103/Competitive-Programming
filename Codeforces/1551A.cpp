#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        // if (n == 1)
        //     cout << 1 << " " << 0 << endl;
        // else if (n == 2)
        //     cout << 0 << " " << 1 << endl;
        // else
        // {
        //     if (n % 3 == 0)
        //     {
        //         cout << n / 3 << " " << n / 3 << endl;
        //     }
        //     else if()
        //     {
        // long long int p = round(n / 3);
        // cout << p << endl;
        // if (2 * p + (p + 1) == n)

        //         cout << n / 3 + 1 << " " << n / 3 << endl;

        //         cout << p << " " << p + 1 << endl;
        //     }
        // }
        if (n % 3 == 0)
        {
            cout << n / 3 << " " << n / 3 << endl;
            continue;
        }
        if (n % 3 == 1)
        {
            cout << (n / 3 + 1) << " " << n / 3 << endl;
            continue;
        }
        cout << (n / 3) << " " << (n / 3 + 1) << endl;
    }
    return 0;
}