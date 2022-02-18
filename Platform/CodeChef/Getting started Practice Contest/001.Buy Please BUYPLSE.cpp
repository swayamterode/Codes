#include <bits/stdc++.h>
using namespace std;

void ans(){
    int a, b, x, y;
    cin>>a >>b >>x >>y;
    int ans;
    ans = (a * x) + (b * y);
    cout<<ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ans();
	return 0;
}
