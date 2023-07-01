#include <bits/stdc++.h>
using namespace std;

void rec()
{
    int n;
    string s;
    cin >> n >> s;

    if (n <= 2)
    {
        cout << s << endl;
        return;
    }
    else
    {
        sort(s.begin(), s.end());
        cout << s << endl;
        return;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        rec();
    }

    return 0;
}