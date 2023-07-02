#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n = 0;
    cin >> t;
    while (t--)
    {
        int ct = 0;
        int a[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
                ct++;
            }
            else
            {
                continue;
            }
        }
        if (ct >= 2)
        {
            n++;
        }
        else
        {
            continue;
        }
    }
    cout << n << endl;
    return 0;
}