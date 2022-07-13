#include <bits/stdc++.h>
using namespace std;
int solve() {
int n , k=0;
cin>>n;   
int arr[n];
for(int i = 0; i<n; i++)
{
	cin>>arr[i];
}

for(int  i = 0 ; i< n; i ++){
	int ans = i+ k +1;
	if(ans == arr[i])
		k++;
}
cout<<k<<endl;
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
