#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;

  x++;
  cout << x << endl;
  cout << x * (a + b) << endl;
  int y = x * x * (a + b) * (a + b);
  cout << y << endl;
  cout << y - 1 << endl;
}
