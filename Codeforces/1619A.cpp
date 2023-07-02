#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int l = s.length();
        if (l % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            int ct = 0;
            for (int i = 0, j = l / 2; i < l / 2, j < l; i++, j++)
            {
                if (s[i] != s[j])
                {
                    cout << "NO" << endl;
                    ct++;
                    break;
                }
            }
            if (ct == 0)
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}