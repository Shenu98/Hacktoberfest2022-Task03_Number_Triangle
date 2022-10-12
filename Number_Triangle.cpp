#include <iostream>

using namespace std;

int main() {

  int a, j, k, l, n;

  cout << "Enter the Range=";

  cin >> n;

  for (a = 1; a <= n; a++) {

    for (j = 1; j <= n - a; j++) {

      cout << " ";

    }

    for (k = 1; k <= a; k++) {

      cout << k;
    }
    for (l = a - 1; l >= 1; l--) {

      cout << l;

    }
    cout << "\n";
  }
  return 0;
}

