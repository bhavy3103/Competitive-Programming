#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int r = 1;
    while (r * 5 < n)
    {
        n = n - r * 5;
        r = r * 2;
    }
    string names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    cout << names[(n - 1) / r] << endl;
    return 0;
}
// long long int n;
// cin >> n;
// vector<string> v;
// v.push_back("Sheldon");
// v.push_back("Leonard");
// v.push_back("Penny");
// v.push_back("Rajesh");
// v.push_back("Howard");

// for (int i = 0; i < n; i++)
// {
//     if (v[i] == "Sheldon")
//     {
//         v.push_back("Sheldon");
//         v.push_back("Sheldon");
//     }
//     else if (v[i] == "Leonard")
//     {
//         v.push_back("Leonard");
//         v.push_back("Leonard");
//     }
//     else if (v[i] == "Penny")
//     {
//         v.push_back("Penny");
//         v.push_back("Penny");
//     }
//     else if (v[i] == "Rajesh")
//     {
//         v.push_back("Rajesh");
//         v.push_back("Rajesh");
//     }
//     else if (v[i] == "Howard")
//     {
//         v.push_back("Howard");
//         v.push_back("Howard");
//     }
// }
// cout << v[n - 1] << endl;
// return 0;
// }