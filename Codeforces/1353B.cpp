// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k, sum = 0, sum1 = 0;
//         cin >> n >> k;
//         int a[n], b[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             sum1 += a[i];
//         }

//         for (int i = 0; i < n; i++)
//         {
//             cin >> b[i];
//         }
//         sort(a, a + n);
//         sort(b, b + n);

//         reverse(a, a + n);
//         reverse(b, b + n);
//         if (k == 0)
//         {
//             cout << sum1 << endl;
//         }
//         else
//         {
//             for (int i = 0; i < k; i++)
//             {
//                 if (a[i] >= b[i])
//                     sum += a[i];
//                 else
//                     sum += b[i];
//             }
//             cout << sum << endl;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, s = 0;
        cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s += a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(b, b + n);
        int i = 0, j = n - 1;
        while (k > 0 && i < n && j >= 0)
        {
            if (a[i] < b[j])
            {
                s += b[j] - a[i];
                i++;
                j--;
                k--;
            }
            else
                break;
        }
        cout << s << "\n";
    }
}