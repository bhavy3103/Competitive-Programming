#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char a[100];
    cin >> s;
    int ct = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '+')
        {
            a[ct] = s[i];
            ct++;
        }
    }
    sort(a, a + ct);
    for (int i = 0; i < ct; i++)
    {
        if (i == ct - 1)
        {
            cout << a[i] << endl;
        }
        else
        {
            cout << a[i] << "+";
        }
    }

    return 0;
}