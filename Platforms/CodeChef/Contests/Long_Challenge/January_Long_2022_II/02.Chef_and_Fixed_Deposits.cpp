#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int N, X;
    cin >> N >> X;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + N); // sorts the array in order.
    int ans = -1, fixDeposite = 0;
    for (int i = N - 1; i >= 0; i--)
    {
        fixDeposite += arr[i];
        if (fixDeposite >= X)
        {
            ans = N - i;
            break;
        }
    }
    cout << ans << "\n";
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