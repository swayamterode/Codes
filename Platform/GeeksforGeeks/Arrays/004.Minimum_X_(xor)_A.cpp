// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minVal(int a, int b) {
        // code here
        int countSetinB;
        int B = b;
        while(B){
            countSetinB += B%2;
            B/=2;
        }
        int numberOfBitsToSetInB = countSetinB;
        int ans = 0;
        for(int i = 31; i>=0 && numberOfBitsToSetInB; i--){
            if(a&(1<<i)) 
            {                  
                ans|=(1<<i); 
                numberOfBitsToSetInB--; 
            }
        }
        for(int i = 0; i<=31 && numberOfBitsToSetInB; i++) {
             if((ans&(1<<i))==0)
            {
                ans|=(1<<i); 
                numberOfBitsToSetInB--; 
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}  // } Driver Code Ends
