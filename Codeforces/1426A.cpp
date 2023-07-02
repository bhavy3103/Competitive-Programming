#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int ct = 0;
        if (n < 2)
        {
            cout << 1 << endl;
        }
        else
        {
            n = n - 2;
            ct++;
            int q = n % m;
            int z = n / m;
            int sum = 0;
            if (q == 0)
            {
                sum = z + ct;
            }
            else
            {
                sum = z + ct + 1;
            }
            cout << sum << endl;
        }
    }
    return 0;
}