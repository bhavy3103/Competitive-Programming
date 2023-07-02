#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int s, q, r;
    s = (k * l) / nl;
    q = c * d;
    r = p / np;
    cout << min(min(s, q), r) / n << endl;
    return 0;
}