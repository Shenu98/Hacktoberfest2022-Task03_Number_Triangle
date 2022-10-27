#include <iostream>
using namespace std;
int main() {
  int a, b, c, d, n;
  cout << "Enter the Range=";
  cin >> n;
  for (a = 1; a <= n; a++) {
    for (b = 1; b <= n - a; b++) {
      cout << " ";
    }
    for (c = 1; c <= a; c++) {
      cout << c;
    }
    for (l = a - 1; d >= 1; d--) {
      cout << d;
    }
    cout << "\n";
  }
  return 0;
}
