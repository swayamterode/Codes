#include<iostream>
#include<math.h>
using namespace std;
int anyBasetoDecimal(int n, int b) {
  int power = 1;
  int ans = 0;
  while (n > 0) {
    int digit = n % 10;
    n /= 10;
    ans += digit * power;
    power *= b;
  }
  return ans;
}
int main() {
  int n, b;
  cin >> n >> b;
  cout << anyBasetoDecimal(n, b);
  return  0;
}
