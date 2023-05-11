#include <bits/stdc++.h>
using namespace std;

int GCD(int x, int y) {
  while (x >= 1 && y >= 1) {
    if (x >= y)
      x = x % y;
    else
      y = y % x;
  }
  if (x != 0)
    return x;
  return y;
}

int main() {
  int A, B;
  cin >> A >> B;
  cout << GCD(A, B) << endl;
  return 0;
}
