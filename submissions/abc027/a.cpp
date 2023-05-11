#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a == b) {
    cout << c << endl;
    return 0;
  }
  if (a == c) {
    cout << b << endl;
    return 0;
  } else
    cout << a << endl;
}
