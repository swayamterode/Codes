//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    int findMidSum(int ar1[], int ar2[], int n)
    {
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            ans.push_back(ar1[i]);
            ans.push_back(ar2[i]);
        }
        sort(ans.begin(), ans.end());
        int sum = 0;
        int size = n + n;
        if (size % 2 == 0)
        {
            int low = 0, high = size - 1;
            int mid = low + (high - low) / 2;
            sum = ans[mid] + ans[mid + 1];
        }
        else
        {
            int low = 0, high = size - 1;
            int mid = low + (high - low) / 2;
            sum = ans[mid] + ans[mid + 1];
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        int ar1[n], ar2[n];
        for (i = 0; i < n; i++)
        {
            cin >> ar1[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> ar2[i];
        }
        Solution ob;
        auto ans = ob.findMidSum(ar1, ar2, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends