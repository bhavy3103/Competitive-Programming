#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // string s, a, b;
    // cin >> s;
    // int ct = 0;
    // int l = s.length();
    // while (l >= 0)
    // {
    //     int i = 0;
    //     if ((s[i] == '0' && s[i + 1] == '1') || (s[i] == '1' && s[i + 1] == '0'))
    //     {
    //         ct++;
    //         s.erase(i, i + 1);
    //         l = l - 2;
    //     }
    //     i++;
    // }
    // if (ct == 0)
    // {
    //     cout << s.length();
    // }
    // else
    // {
    //     cout << s.length();
    // }

    // a = "01";
    // b = "10";
    // int l = s.length();
    // while (l > 0)
    // {
    //     size_t f = s.find(a);
    //     if (f != string::npos || s.find(b) !=)
    // }
    int n, elm, c1, c0;
    string s;
    cin >> n;
    cin >> s;
    c1 = c0 = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '0')
            ++c0;
        else
            ++c1;
    }
    int rm = min(c0, c1);
    cout << n - 2 * rm;

    return 0;
}