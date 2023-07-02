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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int p = *max_element(a, a + n);
        int q = *min_element(a, a + n);
        cout << p - q << endl;
    }

    return 0;
}