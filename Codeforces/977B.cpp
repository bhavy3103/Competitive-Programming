#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, res = 0;
    cin >> a;
    string aux;
    cin >> aux;
    map<pair<char, char>, int> M;
    for (unsigned int i = 1; i < aux.length(); i++)
        M[make_pair(aux[i - 1], aux[i])]++;
    pair<char, char> p;
    for (auto m : M)
    {
        if (m.second > res)
        {
            p = m.first;
            res = m.second;
        }
    }
    cout << p.first << p.second << endl;
    // int n, m = 0, ct = 0;
    // cin >> n;
    // string s;
    // cin >> s;
    // string a = "", b;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     char j = s[i], k = s[i + 1];
    //     b += j;
    //     b += k;
    // cout << b << endl;
    //     for (int i = 0; i < n; i++)
    //     {
    //         /* code */
    //     }

    //     size_t fd = s.find(b);
    //     if (fd != string::npos)
    //     {
    //         ct++;
    //         if (ct > m)
    //         {
    //             a = b;
    // cout << a << endl;
    //             m = ct;
    //         }
    //         cout << ct << endl;
    //     }
    //     else
    //         ct = 0;
    // }
    // cout << a << endl;
    return 0;
}