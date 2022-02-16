#include <bits/stdc++.h>
using namespace std;
int solve() {
    int n;
    cin>>n;
int sum = 0;
int a[n*2];
for(int i = 0; i< n*2; i++){
	cin>>a[i];
	sum += a[i];
}
(sum%2==0)?cout<<"YES\n":cout<<"NO\n";
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
