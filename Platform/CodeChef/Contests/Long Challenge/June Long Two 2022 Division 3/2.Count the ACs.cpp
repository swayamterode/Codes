#include <bits/stdc++.h>
using namespace std;
int solve() {
   int p;
   cin>>p;
   int quo = p/100; 
   int rem = p%100;
   if((quo+rem)<=10)
      cout<< quo+rem<<endl;
   else
      cout<< -1<<endl;
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
