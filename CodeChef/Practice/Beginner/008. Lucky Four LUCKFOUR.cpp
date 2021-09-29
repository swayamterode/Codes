#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,rem;
        int count = 0;
        cin>>n;
        while(n!=0){
            rem = n % 10;
            if(rem == 4){
                count++;
            }
            n /= 10;
        }
        cout<<count<<endl;
    }
    return 0;
}
