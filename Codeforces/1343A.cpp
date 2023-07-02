#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    scanf("%lld", &t);
    while (t--)
    {
        long long int n;
        scanf("%lld", &n);
        long long int m = 1;
        for (long long int p = 1; p < 50; p++)
        {
            m = 2 * m + 1;
            if (n % m)
            {
                continue;
            }
            printf("%lld\n", n / m);
            break;
        }
    }
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     long long int n;
    //     cin >> n;
    //     int x = 1;
    //     int p, ct;
    //     int i = 0;
    //     while (p <= n)
    //     {
    //         p += pow(2, i);
    //         if (p > n)
    //             break;
    //         i++;
    //     }
    //     while (n % (x * i) == 0)
    //     {
    //         if (n % (x * i) != 0)
    //         {
    //             x++;
    //         }
    //         ct = x;
    //     }
    //     cout << ct << endl;
    // }
    return 0;
}