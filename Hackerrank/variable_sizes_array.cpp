#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q;
    cin >> n >> q;

    vector<vector<int>> a(n); // not using a[n].... it will work as 1D array
    for (int i = 0; i < q; i++)
    {
        int l;
        cin >> l;
        a[i].resize(l); // this is  a variable size array || we resize array
        for (int j = 0; j < l; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int k = 0; k < q; k++)
    {
        int i, j;
        cin >> i >> j;
        cout << a[i][j] << endl;
    }

    return 0;
}
