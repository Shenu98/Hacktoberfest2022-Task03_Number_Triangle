#include <iostream>
using namespace std;
int main() {
  int a, b, p, l, n;
  cout << "Enter the Range=";
  cin >> n;
  for (a = 1; a <= n; a++) {
    for (b = 1; b <= n - a; b++) {
      cout << " ";
    }
    for (p = 1; p <= a; p++) {
      cout << p;
    }
    for (l = a - 1; l >= 1; l--) {
      cout << l;
    }
    cout << "\n";
  }
  return 0;
}
