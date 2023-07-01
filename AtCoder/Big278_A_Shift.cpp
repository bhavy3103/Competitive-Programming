#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    if (n < k)
    {
        for (int i = 0; i < n; i++)
        {
            v.pop_back();
        }
        for (int i = 0; i < n; i++)
        {
            v.push_back(0);
        }
    }
    else
    {
        for (int i = 0; i < k; i++)
        {
            v.erase(v.begin());
        }
        for (int i = 0; i < n; i++)
        {
            v.push_back(0);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}