#include <bits/stdc++.h>
using namespace std;

int main()
{
    // // int n, ct = 0;
    // // char o, c, a[n], b[n];
    // // cin >> o;
    // // for (int i = 1; i < 2002; i = i + 2)
    // // {
    // //     cin >> a[i];
    // //     cin >> b[i + 1];
    // // }
    // // cin >> c;
    // // sort(a, a + n);
    // // for (int i = 1; i < 1000; i = i + 2)
    // // {
    // //     if (a[i] != a[i + 1])
    // //     {
    // //         ct++;
    // //     }
    // // }
    // // cout << ct << endl;

    // string s;
    // cin >> s;
    // int ct = 0;
    // char a[1000];
    // for (int i = 1; i < s.length(); i = i + 2)
    // {
    //     s[i] = a[i];
    // }
    // sort(a, a + (s.length()));
    // for (int i = 1; i < s.length(); i = i + 2)
    // {
    //     if (a[i] != a[i + 1])
    //     {
    //         ct++;
    //     }
    // }
    // cout << ct << endl;

    int ct = 0;
    string s;
    getline(cin, s);
    sort(s.begin(), s.end());
    cout << s << endl;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == '{}' || s[i] == ' ' || s[i] == ',')
        {
            continue;
        }
        else
        {
            if (s[i] != s[i + 1])
                ct++;
        }
    }
    cout << ct - 1 << endl;

    return 0;
}