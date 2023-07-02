#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    cin >> n >> a;
    int mina(a), maxa(a), mini(0), maxi(0);
    for (int i = 1; i < n; ++i)
    {
        cin >> a;
        if (a > maxa)
        {
            maxa = a;
            maxi = i;
        }
        if (a <= mina)
        {
            mina = a;
            mini = i;
        }
    }
    cout << maxi + (n - 1 - mini) - (mini < maxi ? 1 : 0) << endl;
    // int n, ct1 = 0, ct2 = 0;
    // cin >> n;
    // int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    // int p = *max_element(a, a + n);
    // int q = *min_element(a, a + n);
    // int i = 0;
    // while (a[i] != p)
    // {
    //     ct1++;
    //     i++;
    // }
    // int j = 0;
    // while (a[j] != q)
    // {
    //     ct2++;
    //     j++;
    // }

    // if (ct1 < ct2)
    // {
    //     cout << ct1 / 2 + ct2 / 2 << endl;
    // }
    // else
    // {
    //     cout << ct1 + ct2 - 1 << endl;
    // }

    return 0;
}