#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    int ct = 0;
    cin >> s1 >> s2;
    int l = s1.length();
    for (int i = 0; i < l; i++)
    {
        if (s1[i] == s2[l - i - 1])
            ct++;
    }

    if (ct > l)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}