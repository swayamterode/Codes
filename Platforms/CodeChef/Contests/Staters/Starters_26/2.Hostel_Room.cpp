#include <bits/stdc++.h>
using namespace std;
int solve() {
 int n,x;
 cin>>n>>x;
int arr[n];
 for(int i = 0; i<n;i++)
 {
 	cin>>arr[i];
 }
 int maxV = x;

 for (int i = 0; i < n; ++i)
 {
 	x = arr[i] + x;
 	if(maxV < x)
 	{
 		maxV = x;
 	}
 }
 cout<<maxV<<endl;
 return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}
