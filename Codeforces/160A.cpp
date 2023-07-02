#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n, ct = 1;
    // cin >> n;
    // int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    // sort(a, a + n);
    // int sum1 = a[0], sum2 = 0;
    // for (int i = 1; i < n; i++)
    // {
    // if (sum1 + a[i] < sum2)
    // {
    //     sum1 += a[i];
    //     ct++;
    // }
    //     sum2 = a[1];
    //     if (sum1 > sum2 + a[i])
    //     {
    //         sum2 += a[i];
    //     }
    //     else
    //     {
    //         sum1 += a[i];
    //         ct++;
    //     }
    // cout << ct << endl;

    long long n, m, i, j, sum, cnt, ans;
    while (cin >> n)
    {
        long long a[n];
        sum = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sum = sum / 2;
        sort(a, a + n);
        cnt = 0;
        ans = 0;
        for (i = n - 1; i >= 0; i--)
        {
            ans += a[i];
            cnt++;
            if (ans > sum)
                break;
        }
        cout << cnt << endl;
    }

    return 0;
}