#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y, z;
  cin >> x;
  y = (x / 500) * 1000;
  z = x % 500;
  cout << y + (z / 5) * 5 << endl;
  return 0;
}
