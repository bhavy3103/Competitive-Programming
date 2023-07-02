#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n, m;
    // cin >> n >> m;
    // int a[n];
    // vector<int> v;
    // for (int i = 0; i < m; i++)
    // {
    //     cin >> a[i];
    // }
    // sort(a, a + m);
    // int small = a[n - 1] - a[0];
    // int p = *max_element(a, a + n);
    // int q = *min_element(a, a + n);
    // cout << p << " " << q;
    // int s = p - q;

    // for (int i = 1; i < m - n; i++)
    // {
    //     if (a[i + n - 1] - a[i] < small)
    //     {
    //         small = a[i + n - 1] - a[i];
    //     }
      // int q = *min_element(v.begin(), v.end());
    //     cout << small << endl;

    int n, m, f[1000];
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        cin >> f[i];
    }
    sort(f, f + m);
    int least = f[n - 1] - f[0];
    for (int i = 1; i <= m - n; ++i)
    {
        if (f[i + n - 1] - f[i] < least)
        {
            least = f[i + n - 1] - f[i];
        }
    }
    cout << least << endl;
    return 0;
}
