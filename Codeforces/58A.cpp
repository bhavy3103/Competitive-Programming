#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, a = "hello";
    cin >> s;
    int p = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == a[p])
            p++;
        if (p == 5)
            break;
    }
    if (p == 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}