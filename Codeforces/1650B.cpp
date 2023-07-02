#include <bits/stdc++.h>
using namespace std;
// long long int l, r, a;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int l, r, x;
        cin >> l >> r >> x;
        int ans = r / x + r % x;
        int m = r / x * x - 1;
        if (m >= l)
            ans = max(ans, m / x + m % x);
        cout << ans << endl;
        // vector<int> v;
        // long long int k;
        // for (int i = l; i <= r; i++)
        // {
        //     k = floor(i / a) + i % a;
        //     cout << k << endl;
        //     v.push_back(k);
        // n++;
        // }
        // cout << *max_element(v.begin(), v.end()) << endl;
    }
    return 0;
}