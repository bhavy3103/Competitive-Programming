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
        int ct1 = 0, ct2 = 0, sum = 0;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
                ct1++;
                sum += 1;
            }
            else
            {
                ct2++;
                sum += 2;
            }
        }
        if (sum % 2 == 0)
        {
            if ((sum / 2) % 2 == 0)
                cout << "YES" << endl;
            else
            {
                // bool p;
                // if (ct1 > 0)
                //     p = true;
                // else
                //     p = false;
                if (ct1)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
        else
            cout << "NO" << endl;

        // sum = accumulate(a, a + n, 0);
        // if (sum1 == sum2)
        //     cout << "YES" << endl;
        // else
        // cout << endl;

        //     cout << "NO" << endl;
    }
    return 0;
}