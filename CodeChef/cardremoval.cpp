#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = 1;
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; i < n; j++)
            {
                if (a[i] == a[j])
                {
                    b[i] = b[i] + 1;
                }
            }
        }
        sort(b, b + n);

        cout << (n)-b[n - 1] << endl;
    }
    return 0;
}