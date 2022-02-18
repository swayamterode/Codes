// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        // code here
        int count0=0;
        int count1=0;
        for(int i =0 ;i<n; i++) {
            if(arr[i] == 0) 
            count0++;
            
            else 
            count1++;
        }
        int k = 0;
        for(int i = 0; i< count0; i++) {
            arr[i] = 0;
            k = i;
        }
        for(int j = k+1; j < n; j++) {
            arr[j] = 1;
        }
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.segregate0and1(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends
