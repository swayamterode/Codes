#include <bits/stdc++.h>
using namespace std;
int solve() {
int n;
cin>>n;
string str;
cin>>str;
int x = 0, y= 0;
	for(int i = 0; i<n; i++)
	{
		if(str[i] == '0')
			x++;
		else
			y++;
	}
	if(n%2 == 0)
	{
		if(x == y){
			cout<<"Yes\n";
			}
		else if(x%2 == 0 && y%2 == 0){
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}
	else{
		cout<<"YES\n";
	}
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
