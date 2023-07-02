#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string p;
    int c = 0;
    map<string, int> m;
    // vector<string, int> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }
    for (auto it : m)
    {
        if (it.second > c)
        {
            p = it.first;
            c = it.second;
        }
        // v.push_back(it.first);
        // v.push_back(it.second);
    }
    cout << p << endl;
    // for (auto it : m)
    // {
    //     if (v.second > c)
    // }

    return 0;
}