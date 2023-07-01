#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    set<int> s;
    for (int i = 0; i < t; i++)
    {
        int q, n;
        cin >> q >> n;
        if (q == 1)
        {
            s.insert(n);
        }
        else if (q == 2)
        {
            s.erase(n);
        }
        else if (q == 3)
        {
            auto it = s.find(n);
            if (it != s.end())
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
