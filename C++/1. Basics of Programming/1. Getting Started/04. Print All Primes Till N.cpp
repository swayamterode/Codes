/**
 * @file 04. Print All Primes Till N.cpp
 * @author Swayam Terode
 * @date 2021-08-06
 * @copyright: Swayam Terode 2021
 */
#include <iostream>
using namespace std;
int main() {
  int low, high;
  cin >> low;
  cin >> high;
  int flag;
  for (int i = low; i <= high; i++) {

    if (i == 1 || i == 0)
      continue;

    flag = 1;

    for (int j = 2; j * j <= i; ++j) {
      if (i % j == 0) {
        flag = 0;
        break;
      }
    }

    // flag = 1 means i is prime
    // and flag = 0 means i is not prime
    if (flag == 1)
      cout << i << endl;
  }
  return 0;
}
