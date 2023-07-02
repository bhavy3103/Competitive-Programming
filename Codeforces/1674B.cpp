#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // char c1, c2, p, q;
        // cin >> c1 >> c2;
        // p = c1 - 'a';
        // q = c2 - 'a';
        string s;
        cin >> s;
        int p;
        if (s[0] > s[1])
            p = 1;
        else
            p = 0;

        cout << (25 * (s[0] - 'a') + s[1] - 'a' + p) << endl;
    }
    return 0;
}