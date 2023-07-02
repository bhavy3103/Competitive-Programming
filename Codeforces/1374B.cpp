#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int p;
    while (t--)
    {
        long long int n;
        cin >> n;
        int ct = 0;
        while (n != 1)
        {
            if (n % 6 == 0)
                n /= 6, ct++;
            else if (n % 3 == 0)
                n *= 2, ct++;
            else
            {
                ct = -1;
                break;
            }
        }
        cout << ct << endl;
        // if (n % 2 != 0)
        // {
        //     ct = 0;
        // }
        // if (n == 1)
        //     cout << 0 << endl;
        // else if (n == 2)
        //     cout << -1 << endl;
        // else
        // {
        //     while (n > 1)
        //     {
        //         if (n % 6 == 0)
        //         {
        //             ct++;
        //             n = n / 6;
        //             if (n == 2)
        //             {
        //                 ct = 0;
        //                 break;
        //             }
        //         }
        //         else if (n % 6 != 0)
        //         {

        //             while (n % 6 != 0)
        //             {
        //                 n = n * 2;
        //                 ct++;
        //                 if (n == 2)
        //                 {
        //                     ct = 0;
        //                     break;
        //                 }
        //             }
        //         }
        //     }
        // }
        // if (ct > 0)
        //     cout << ct << endl;
        // else
        //     cout << -1 << endl;
    }
    return 0;
}