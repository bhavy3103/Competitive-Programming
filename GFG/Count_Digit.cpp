//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int evenlyDivides(int N)
    {
        int p, ct = 0, k;
        k = N;
        while (k != 0)
        {
            p = k % 10;
            if (p > 0 && N % p == 0)
                ct++;

            k /= 10;
        }
        // code here
        return ct;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0;
}
// } Driver Code Ends