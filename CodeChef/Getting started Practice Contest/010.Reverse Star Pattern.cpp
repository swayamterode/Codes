#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  int N;
  cin >> N;
  int space = N - 1;
  int star = 1;
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= space; j++) {
      cout << " ";
    }
    for (int k = 1; k <= star; k++) {
      cout << "*";
    }
    cout << endl;
    space--;
    star++;
  }

  return 0;
}
