#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff(i, a, b) for (ll i = a; i < b; i++)
#define fb(i, a, b) for (ll i = a; i >= b; i--)
#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define asc_vs(vec) sort(vec.begin(), vec.end())
#define dsc_vs(vec) sort(vec.begin(), vec.end(), greater<int>())
#define asc_arr(a, n) sort(a, a + n)
#define dsc_arr(a, n) sort(a, a + n, greater<int>())
#define rev_vs(vec) reverse(vec.begin(), vec.end())
#define rev_arr(a) reverse(a, a + n)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int b = 0; b < t; b++)
    {
        int n, s, r;
        cin >> n >> s >> r;
        vector<int> vec(n - 1);
        vector<int> v1;
        vec.push_back(s - r);
        int rem_sum = s - r;
        for (int i = 0; i < n - 1; i++)
        {
            vec[i] = 1;
            r--;
        }
        int i = 0;
        while (r != 0)
        {
            if (vec[i] < rem_sum)
            {
                vec[i]++;
                r--;
            }
            else
                i++;
        }
        // sort(vec.begin(), vec.end());
        for (int i = 0; i < vec.size(); ++i)
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    // if (r > 0 && r - mx > 0)
    // {
    //     r -= mx;
    // }
    // int k = (r % mx);
    // if (k > 0)
    // {
    //     vec.push_back(k);
    //     r -= k;
    // }
    // else
    //     mx--;

    // for (int i = 0; i < vec.size(); i++)
    // {
    //     cout << vec[i] << " ";
    // }
    // cout << endl;

    return 0;
}