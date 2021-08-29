#include<iostream>
using namespace std;
int decimalToAnyBase(int n, int b) {
  int power = 1;
  int ans = 0;
  while (n != 0) {
    int digit = n % b;
    ans += digit * power;
    power* = 10;
    n /= 10;
  }
  return ans;
}

int anyBaseToDecimal(int n, int b) {
  int power = 1;
  int ans = 0;
  while (n != 0) {
    int digit = n % 10;
    ans += digit * power;
    power *= 10;
    n /= 10;
  }
  return ans;
}

int getValue(int n, int src, int dest)
{
  int decimalValue = anyBaseToDecimal(n, src); //Converting to decimal
  int finalBaseValue = decimalToAnyBase(decimalValue, dest); // Converting to destination base
  return finalBaseValue;
}
int main() {
  int n, b1, b2;
  cin >> n >> b1 >> b2;
  cout << getValue(n, b1, b2);
  return 0;
}