#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, v;
        cin >> n >> k >> v;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long int sum;
        sum = accumulate(a, a + n, 0);
        int x;
        x = (v * (n + k) - sum);
        if (x <= 0 || x % k != 0)
            cout << "-1" << endl;
        else
            cout << x / k << endl;
    }
    return 0;
}
