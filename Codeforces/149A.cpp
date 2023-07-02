#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    int a[12];
    int ct = 0, sum = 0;
    int p;
    for (int i = 0; i < 12; i++)
    {
        cin >> a[i];
    }
    p = accumulate(a, a + 12, 0);
    if (p < k)
    {
        cout << -1 << endl;
    }
    else
    {
        sort(a, a + 12);
        int i = 11;
        while (sum < k)
        {
            sum += a[i];
            ct++;
            i--;
        }
        cout << ct << endl;
    }

    return 0;
}