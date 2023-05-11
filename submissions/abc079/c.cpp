#include <bits/stdc++.h>
using namespace std;

int main() {
  char A, B, C, D;
  cin >> A >> B >> C >> D;
  int a, b, c, d;
  a = int(A - '0');
  b = int(B - '0');
  c = int(C - '0');
  d = int(D - '0');
  if (a + b + c + d == 7) {
    cout << a << "+" << b << "+" << c << "+" << d << "=" << 7 << endl;
    return 0;
  }
  if (a - b + c + d == 7) {
    cout << a << "-" << b << "+" << c << "+" << d << "=" << 7 << endl;
    return 0;
  }
  if (a + b - c + d == 7) {
    cout << a << "+" << b << "-" << c << "+" << d << "=" << 7 << endl;
    return 0;
  }
  if (a + b + c - d == 7) {
    cout << a << "+" << b << "+" << c << "-" << d << "=" << 7 << endl;
    return 0;
  }
  if (a - b - c + d == 7) {
    cout << a << "-" << b << "-" << c << "+" << d << "=" << 7 << endl;
    return 0;
  }
  if (a + b - c - d == 7) {
    cout << a << "+" << b << "-" << c << "-" << d << "=" << 7 << endl;
    return 0;
  }
  if (a - b + c - d == 7) {
    cout << a << "-" << b << "+" << c << "-" << d << "=" << 7 << endl;
    return 0;
  }
  if (a - b - c - d == 7) {
    cout << a << "-" << b << "-" << c << "-" << d << "=" << 7 << endl;
    return 0;
  }
}
