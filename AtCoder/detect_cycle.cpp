#include <bits/stdc++.h>
using namespace std;
int find(int x)
{
    if (p[x] != x)
        p[x] = find(p[x]);
    return p[x];
}
int main()
{
    int n, m, x, y, ans = 0;
    cin >> n >> m;
    int p[m], d[N];
    for (int i = 0; i < m; i++)
        p[i] = i, d[i] = 1;
    while (m--)
    {
        cin >> x >> y;
        int a = find(x), b = find(y);
        if (a == b)
            ans++;
        else
        {
            p[b] = a;
            d[a] += d[b];
        }
    }
    cout << ans << endl;
    return 0;
}
