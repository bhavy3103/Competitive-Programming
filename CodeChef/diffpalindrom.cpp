#include <bits/stdc++.h>
using namespace std;

void rec()
{
    int a, b;
    cin >> a >> b;

    if (a % 2 == 1 && b % 2 == 1)
    {
        cout << "No" << endl;
        return;
    }
    if (a == 1 || b == 1)
    {
        cout << "No" << endl;
        return;
    }

    cout << "Yes" << endl;
    return;
}
int main()
{
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        rec();
    }

    return 0;
}