// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution
{
public:
    int minJumps(int arr[], int n)
    {
        int pos = 0;
        int jump = 0;
        int destination = 0;
        for (int i = 0; i < n - 1; i++)
        {
            destination = max(destination, arr[i] + i);
            if (pos == i)
            {
                jump++;
                if (destination <= i)
                {
                    return -1;
                }
                pos = destination;
            }
        }
        return jump;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        cout << obj.minJumps(arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends