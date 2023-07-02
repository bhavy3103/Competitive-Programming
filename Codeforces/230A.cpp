#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n, sum = 0, ct = 0;
    cin >> s >> n;
    vector<pair<int, int>> v;
    int x, y;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (s <= v[i].first)
        {
            ct++;
            break;
        }
        else
        {
            sum = s;
            sum += v[i].second;
            s = sum;
        }
    }
    if (ct > 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}