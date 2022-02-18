#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int ans = 0;
    while (n != 0) {
      int digit = n % 10;
      ans = ans + digit ;
      n = n / 10;
    }
    cout << ans << endl;
  }
  return 0;
}
