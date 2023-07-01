#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, ct = 0, k;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            int p;
            cin >> p;

            if (p <= 7)
            {
                ct++;

                if (ct == 7)
                {
                    k = i + 1;
                }
            }
        }

        cout << k << endl;
    }
    return 0;
}