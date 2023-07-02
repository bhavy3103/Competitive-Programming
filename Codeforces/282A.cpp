#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n = 0;
    cin >> t;
    string s, s1, s2, s3, s4;
    s1 = {"X++"};
    s2 = {"X--"};
    s3 = {"++X"};
    s4 = {"--X"};
    while (t--)
    {
        cin >> s;
        if (s == s1)
            n++;
        else if (s == s2)
            n--;
        else if (s == s3)
            ++n;
        else if (s == s4)
            --n;
    }
    cout << n;
    return 0;
}