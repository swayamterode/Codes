#include <bits/stdc++.h>
using namespace std;
int solve() {
	int n,x,y;
	cin>>n>>x>>y;
	int m = 100006;
	for(int i = 0 ; i<=n; i++){
		for(int j = 0; j<=n; j++){
			int k = 100*j+4*i;
			(k>=n) ? m = min(m, i*y+j*x):0;
		}
		}	
		cout<<m<<endl;
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
