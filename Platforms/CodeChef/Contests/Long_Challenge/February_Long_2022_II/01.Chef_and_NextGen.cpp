#include <bits/stdc++.h>
using namespace std;
int solve() {
	    int a,b,x,y;
	    cin>>a>>b>>x>>y;
	    if(x*y >= a*b)
	    	cout<<"YES\n";
	    else
	    	cout<<"NO\n";
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
