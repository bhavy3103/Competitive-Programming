#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff(i, a, b) for (ll i = a; i < b; i++)
#define fb(i, a, b) for (ll i = a; i >= b; i--)
#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define asc_vs(v) sort(v.begin(), v.end())
#define dsc_vs(v) sort(v.begin(), v.end(), greater<int>())
#define asc_arr(a, n) sort(a, a + n)
#define dsc_arr(a, n) sort(a, a + n, greater<int>())
#define rev_vs(v) reverse(v.begin(), v.end())
#define rev_arr(a) reverse(a, a + n)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int l = s.length();
        if (l & 1)
            cout << "NO" << endl;
        else
        {
            if (s[0] == ')' || s[l - 1] == '(')
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        // int ct = 0;
        // stack<char> st;
        // for (int i = 0; i < s.length(); i++)
        // {
        //     if (s[i] == '?')
        //         ct++;
        //     else if (s[i] == '(')
        //         st.push(s[i]);
        //     else if (s[i] == ')' && st.top() == '(' && ct % 2 == 0)
        //     {
        //         st.pop();
        //     }
        //     else if (s[i] == ')' && (st.top() != '(' || ct > 0))
        //     {
        //         st.pop();
        //         ct--;
        //     }
        // }
        // if (ct % 2 == 0 && st.empty())
        // {
        //     cout << "YES" << endl;
        // }
        // else if (ct & 1 && st.empty())
        // {
        //     cout << "NO" << endl;
        // }
    }

    return 0;
}