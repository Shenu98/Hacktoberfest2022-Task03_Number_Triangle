#include <iostream>
using namespace std;
int main() {
  int a, b, c, m, n;
  cout << "Enter the Range=";
  cin >> n;
  for (a = 1; a <= n; a++) {
    for (b = 1; b <= n - a; b++) {
      cout << " ";
    }
    for (c = 1; c <= i; c++) {
      cout << c;
    }
    for (m = a - 1; m >= 1; m--) {
      cout << m;
    }
    cout << "\n";
  }
  return 0;
}
