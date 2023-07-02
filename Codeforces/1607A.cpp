#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, sf;
        cin >> s;
        int sum = 0;
        map<char, int> m;
        for (int i = 0; i < 26; i++)
        {
            m[s[i]] = i;
        }
        cin >> sf;
        for (int i = 1; i < sf.length(); i++)
        {
            sum += abs(m[sf[i]] - m[sf[i - 1]]);
        }
        cout << sum << endl;
    }
    return 0;
}