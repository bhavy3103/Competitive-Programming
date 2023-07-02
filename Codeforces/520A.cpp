#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main()
{
    int t, ct = 0;
    cin >> t;
    string s;
    cin >> s;

    for (int i = 0; i < t; i++)
    {
        if (s[i] <= 90)
        {
            s[i] += 32;
        }
    }

    // transform(s.begin(), s.end(), s.begin(), ::tolower);
    sort(s.begin(), s.end());
    for (int i = 0; i < t; i++)
    {
        if (s[i] != s[i + 1])
        {
            ct++;
        }
    }
    // cout << s << endl;
    // cout << s.length() << endl;
    if (ct >= 26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}