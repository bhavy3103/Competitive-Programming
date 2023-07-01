#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int ct = 0;
    int l = max(s.length(), t.length());
    for (int i = 0; i < l; i++)
    {
        if (s[i] != t[i])
        {
            ct = i;
            break;
        }
    }
    cout << ct + 1 << endl;

    return 0;
}