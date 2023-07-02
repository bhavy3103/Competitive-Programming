#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v;
    v.push_back(2);
    int ct = 0;
    for (int i = 2; i < 52; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
            else if (i == j + 1)
                v.push_back(i);
        }
    }
    for (int i = 0; i < 52; i++)
    {
        if (v[i] == n && v[i + 1] == m)
        {
            cout << "YES" << endl;
            ct++;
            break;
        }
    }
    if (ct == 0)
        cout << "NO" << endl;

    return 0;
}