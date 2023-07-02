#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ans, n;
    cin >> n;
    ans = 0;
    while (n > 1)
    {
        if (n % 2 == 0)
            n = n / 2;
        else
        {
            n = n - 1;
            ans++;
        }
    }
    cout << ans + 1 << endl;

    // long long int n;
    // cin >> n;
    // unsigned long int b, t = 1, i = 1;
    // while (t)
    // {
    //     b = 1 << i;
    //     t = n / b;
    //     if (t == 1)
    //     {
    //         t = 0;
    //         break;
    //     }
    //     i++;
    // }
    // cout << b << endl;
    // cout << n % b << endl;
    // t = i;
    // if (n == 1)
    // {
    //     cout << 1 << endl;
    // }
    // else if (n % b == 0)
    // {
    //     cout << 1 << endl;
    // }
    // else if (n % b == 1)
    // {
    //     cout << 2 << endl;
    // }
    // else
    // {
    //     cout << i + 1 << endl;
    // }

    return 0;
}