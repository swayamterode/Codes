/**
 * @file 03. Is A Number Prime.cpp
 * @author Swayam Terode
 * @date 2021-08-06
 * @copyright: Swayam Terode 2021
 */
#include <iostream>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 2; i * i <= n; i++) {
      if (n % i == 0) {
        count = count + 1;
        break;
      }
    }
    if (count == 0)
    {
      cout << "prime" << endl;
    }
    else
      cout << "not prime" << endl;
  }
  return 0;
}
