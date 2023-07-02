#include <bits/stdc++.h>
using namespace std;
using std::to_string;

int main()
{
    string s = " ";
    long long int n, k;
    cin >> n >> k;
    // for (int i = 1; i <= n; i = i + 2)
    // {
    //     s += to_string(i);
    // }
    // for (int i = 2; i <= n; i = i + 2)
    // {
    //     s += to_string(i);
    // }
    // cout << s[k];
    if (k <= (n + 1) / 2)
    {
        cout << k * 2 - 1 << endl;
    }
    else
    {
        cout << (k - (n + 1) / 2) * 2 << endl;
    }

    return 0;
}