#include <iostream>
using namespace std;

int main() {
  int n, k, i;
  cin >> n >> k;
  int arr[n];
  for (i = 0 ; i < n; i++) {
    cin >> arr[i];
  }

  for (i = 0; i < n; i++) {
    if (arr[i] == k) {
      cout << "1\n";
      break;
    }
  }

  if (i == n) {
    cout  << "-1\n";
  }
  return 0;
}
