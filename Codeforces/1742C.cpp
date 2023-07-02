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
    const int N = 8;
    int t;
    cin >> t;
    while (t--)
    {
        // char a[8][8];
        // int ct = 0;
        // for (int i = 1; i <= 8; i++)
        // {
        //     for (int j = 1; j <= 8; j++)
        //     {
        //         cin >> a[i][j];
        //     }
        // }
        // for (int i = 1; i <= 8; i++)
        // {
        //     for (int j = 1; j <= 7; j++)
        //     {
        //         if (a[i][j] == 'R' && a[i][j + 1] == 'R')
        //         {
        //             ct++;
        //             if (ct == 8)
        //             {
        //                 cout << "R" << endl;
        //                 break;
        //             }
        //         }
        //         else
        //             ct = 0;
        //     }
        // }
        std::vector<std::string> v(N);
        for (long p = 0; p < N; p++)
        {
            std::cin >> v[p];
        }
        char ans('.');

        for (long row = 0; ans == '.' && row < N; row++)
        {
            bool test(true);
            for (long col = 0; test && col < N; col++)
            {
                if (v[row][col] != 'R')
                {
                    test = false;
                }
            }
            if (test)
            {
                ans = 'R';
            }
        }

        for (long col = 0; ans == '.' && col < N; col++)
        {
            bool test(true);
            for (long row = 0; test && row < N; row++)
            {
                if (v[row][col] != 'B')
                {
                    test = false;
                }
            }
            if (test)
            {
                ans = 'B';
            }
        }

        std::cout << ans << std::endl;
    }

    return 0;
}