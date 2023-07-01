#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    map<string, int> m;

    for (int i = 0; i < t; i++)
    {
        string s;
        int n, q;
        cin >> q;
        if (q == 1)
        {
            cin >> s >> n;
            auto it = m.find(s);
            if (it == m.end())
            {
                m.insert(make_pair(s, n));
            }
            else
            {
                it->second += n;
            }

            // m[n]++;
        }
        else if (q == 2)
        {
            cin >> s;
            m.erase(s);
        }
        else if (q == 3)
        {
            cin >> s;
            auto it = m.find(s);
            if (it == m.end())
            {
                cout << "0" << endl;
            }
            else
            {
                cout << it->second << endl;
            }
        }
    }
    return 0;
}
