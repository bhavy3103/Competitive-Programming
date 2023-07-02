#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100];
    cin >> s;
    int l = strlen(s);
    sort(s, s + l);
    int ct = 0;
    for (int i = 0; i < l; i++)
    {
        if (s[i] != s[i + 1])
        {
            ct++;
        }
    }
    if (ct % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}