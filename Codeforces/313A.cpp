#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main()
{
    // long long int n;
    // cin >> n;
    // if (n >= 0)
    // {
    //     cout << n << endl;
    // }
    // else
    // {
    //     // long long int q = (-n);
    //     string s;
    //     stringstream st;
    //     st << n;
    //     st >> s;
    //     string a, b;
    //     // char c1 = s[n - 1], c2 = s[n - 2];
    //     a = s.erase(n - 2, 1);
    //     b = s.erase(n - 3, 1);
    //     cout << a << " " << b << endl;

    int n;
    cin >> n;
    if (n >= 0)
    {
        cout << n << endl;
    }
    else
    {
        int a = n / 10;
        int b = n / 100 * 10 + n % 10;
        cout << max(a, b) << endl;
    }
    return 0;
}