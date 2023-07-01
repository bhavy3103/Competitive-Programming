#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    // int a[n];
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        // cin >> a[i];
        int j;
        cin >> j;
        v.push_back(j);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int p;
        cin >> p;
        vector<int>::iterator it;
        it = lower_bound(v.begin(), v.end(), p);
        if (*(it + 1) == p || *(it) == p)
        {
            cout << "Yes"
                 << " " << it - v.begin() + 1 << endl;
        }
        else
        {
            cout << "No"
                 << " " << it - v.begin() + 1 << endl;
        }
    }
    return 0;
}
