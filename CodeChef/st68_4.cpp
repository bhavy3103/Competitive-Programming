#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s1;
        cin >> s1;
        string res = "";
        unordered_set<string> sat;
        res = s1[0];
        int len, max_num, som;
        len = max_num = 0;
        som = 1;
        for (int i = 1; i < n; i++)
        {
            if (s1[i - 1] != s1[i])
            {
                if (max_num < som)
                {
                    max_num = som;
                    max_num--;
                }

                if (sat.find(res) != sat.end())
                {
                    len = max(len, som);
                }

                sat.insert(res);
                res = s1[i];
                som = 1;
            }
            else
            {
                som++;
                res += s1[i];
            }
        }
        if (sat.find(res) != sat.end())
        {
            len = max(len, som);
        }
        else
        {
            if (max_num < som)
            {
                max_num = som;
                max_num--;
            }
        }
        int ans = max(len, max_num);
        cout << ans << endl;
    }
    return 0;
}
