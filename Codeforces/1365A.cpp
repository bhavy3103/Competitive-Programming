#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff(i, a, b) for (ll i = a; i < b; i++)
#define fb(i, a, b) for (ll i = a; i >= b; i--)
#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define asc_vs(v) sort(v.begin(), v.end())
#define dsc_vs(v) sort(v.begin(), v.end(), greater<int>())
#define asc_arr(a, n) sort(a, a + n)
#define dsc_arr(a, n) sort(a, a + n, greater<int>())
#define rev_vs(v) reverse(v.begin(), v.end())
#define rev_arr(a) reverse(a, a + n)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int arr[a][b];
        vector<int> vr, vc;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cin >> arr[i][j];
            }
        }
        int row = 0, col = 0;
        for (int i = 0; i < a; i++)
        {
            // int j = 0;
            int sum = 0;
            for (int j = 0; j < b; j++)
            {
                /* code */
                // if (arr[i][j] == 0)
                //     vr.push_back(arr[i][j]);
                sum += arr[i][j];
            }

            // j++;
            if (sum == 0)
                row++;
        }
        for (int j = 0; j < b; j++)
        {
            // int i = 0;
            int sum = 0;
            for (int i = 0; i < a; i++)
            {
                /* code */
                // if (arr[i][j] == 0)
                //     vc.push_back(arr[i][j]);
                sum += arr[i][j];
            }

            // i++;
            if (sum == 0)
                col++;
        }
        int p = min(row, col);
        if (p & 1)
            cout << "Ashish" << endl;
        else
            cout << "Vivek" << endl;
    }

    return 0;
}