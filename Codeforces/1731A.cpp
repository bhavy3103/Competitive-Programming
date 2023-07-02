#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long int sum = 1;
        cin >> n;
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum = sum * a[i];
        }
        sum = sum + n - 1;
        // int t = n - 1;
        // while (t--)
        // {
        //     for (int i = 1; i < n; i++)
        //     {
        //         sum *= a[i];
        //         a[i] = 1;
        //         sum = a[0];
        //     }
        // }

        // sort(a, a + n, greater<int>());
        // for (int i = 0; i < n; i++)
        // {
        //     // for (int j = i; j < n; j++)
        //     // {
        //     // int i = 0;
        //     sum = a[i] * a[i + 1];
        //     // cout << sum << endl;
        //     if (sum != a[i] && sum != a[i + 1])
        //     {
        //         a[i] = sum;
        //         a[i + 1] = 1;
        //     }
        //     sort(a, a + n, greater<int>());

        //     // }
        // }
        // long int p = accumulate(a, a + n, 0);
        cout << sum * 2022 << endl;
    }
    return 0;
}