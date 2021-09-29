#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T; //Taking Input of Test cases
  while (T--) {
    int N, lastDigit, firstDigit;
    cin >> N; //Taking Input of number
    lastDigit = N % 10; // Calculating Rem
    while (N >= 10) {
      N = N / 10;
    }
    firstDigit = N;
    int sum = firstDigit + lastDigit;
    cout << sum << endl;
  }
  return 0;
}
