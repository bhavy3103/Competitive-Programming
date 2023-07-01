#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ct = 0;
        cin >> n;
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 != 0)
            {
                ct++;
            }
        }
        if (ct > 1 && ct % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        // long long int p = accumulate(a, a + n, 0);
        // if (p % 2 != 0)
        // {
        //     cout << "NO" << endl;
        // }
        // else
        // {
        //     cout << "YES" << endl;
        // }
    }
    return 0;
}