#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n & 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            long long int div = n;
            bool ok = false;
            while (div > 2)
            {
                div /= 2;
                if (div & 1)
                {
                    if (n % div == 0)
                    {
                        ok = true;
                        break;
                    }
                }
            }
            if (ok)
            {
                // cout<<div<<endl;
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     long long int n;
    //     cin >> n;
    //     if (n % 2 != 0)
    //         cout << "YES" << endl;
    //     // else if (n == 2)
    //     //     cout << "NO" << endl;
    //     else
    //     {
    //         long long int p;
    //         n = p;
    //         while (1)
    //         {
    //             p = n / 2;
    //             if (p % 2 != 0)
    //             {
    //                 if (n % p == 0)
    //                 {
    //                     cout << "YES" << endl;
    //                     break;
    //                 }
    //                 else
    //                     cout << "NO" << endl;
    //             }
    //         }

    //         // if (n % (n / 2) == 0)
    //         //     cout << "YES" << endl;
    //         // else
    //         //     cout << "NO" << endl;
    // }
    // }
    return 0;
}