#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int mod = n % 2020;
        long long int div = n / 2020;

        if (mod <= div)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        // int ct = 0;
        // while (ct >= 0)
        // {
        //     if (n % 2021 == 0 || n % 2020 == 0)
        //     {
        //         ct++;
        //     }
        //     else
        //     {
        //         n = n / 2;
        //         if (n % 2021 == 0 || n % 2020 == 0)
        //         {
        //             ct++;
        //         }
        //         else
        //         {
        //             ct = 0;
        //         }
        //     }
        //     if (ct > 0)
        //         cout << "YES" << endl;
        //     else
        //         cout << "NO" << endl;
        // }
    }
    return 0;
}