#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, t, p = 0;
    cin >> x;

    t = x % 5;
    p = x / 5;
    if (t == 0)
        cout << p;
    else
        cout << p + 1;

    return 0;
}