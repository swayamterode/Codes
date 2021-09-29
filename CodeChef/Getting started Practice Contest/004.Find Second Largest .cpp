#include <iostream>
using namespace std;

void secondLargest() {
  int a, b, c;
  cin >> a >> b >> c;

  if (a > b && a > c) { //Checks if a is greater
    if (b > c) { //finds second largest number
      cout << b << endl;
    }
    else
      cout << c << endl;
  }

  else if (b > a && b > c) { //Checks if b is greater
    if ( a > c) { //finds second largest number
      cout << a << endl;
    }
    else
      cout << c << endl;
  }

  else if (c > a && c > b) { //Checks if c is greater
    if ( a > b) { //finds second largest number
      cout << a << endl;
    }
    else
      cout << b << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  secondLargest(); //function call
  return 0;
}
