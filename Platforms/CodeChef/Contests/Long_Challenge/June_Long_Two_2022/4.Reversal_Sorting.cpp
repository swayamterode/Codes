#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int n,x;
    cin >> n>>x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool ans = true;
    for(int i=0; i<n-1;i++){
        if(arr[i] > arr[i+1]){
            int sum = arr[i]+arr[i+1];
            if(sum <= x)
            {
                swap(arr[i],arr[i+1]);
            }
            else{
                ans = false;
                break;
            }
        }
    }
    if(ans == true) {
        cout<<"YES" <<endl;
        
    }
    else{
        cout<<"NO" <<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
