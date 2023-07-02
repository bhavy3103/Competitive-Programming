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
        // int g, p = 1;
        // for (int i = 1; i < n; i++)
        // {
        //     for (int j = i + 1; j < n; j++)
        //     {
        //         g = __gcd(i, j);
        //         if (g >= p)
        //         {
        //             p = g;
        //         }
        //     }
        // }
        cout << n / 2 << endl;
    }
    return 0;
}