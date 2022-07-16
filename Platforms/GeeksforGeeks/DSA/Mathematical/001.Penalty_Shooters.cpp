// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> goals(int X, int Y, int Z) {
        int Xi = X;
        int Yi = Y;
        int Zi = Z;
       
        while(Z > 1) {
            if(X%Z == 0){
                X--;
            }
            else if(Y%Z == 0) {
                Y--;
            }
            else {
                Z--;
            }
        }
       return {Xi - X, Yi - Y};
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int X, Y, Z;
        cin>>X>>Y>>Z;
        
        Solution ob;
        vector<int> ans = ob.goals(X, Y, Z);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}  // } Driver Code Ends
