#include <bits/stdc++.h>
using namespace std;

int main() {
  long long a, b, c;
  cin >> a >> b >> c;
  if (a + c <= 2 * b) {
    cout << b * 2 - a - c << endl;
    return 0;
  } else if ((a + c - b * 2) % 2 == 0) {
    cout << (a + c - b * 2) / 2 << endl;
    return 0;
  } else
    cout << (a + c - b * 2) / 2 + 2 << endl;
}
