// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        int start = 0, end = 1;
        int sum = arr[0];
        
        while(end <= n){
            while(sum>s &&  start < end - 1){
                sum = sum - arr[start];
                start++;
            }
            if(sum == s){
                start++;
                end++;
                return {start,end-1};
            }
            if(end < n){
                sum = sum + arr[end];
            }
            end++;
        }
        return {-1};
        
    }
};
// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends
