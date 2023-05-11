#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int A, B, count = 0;
  cin >> A >> B;
  for (int i = A; i <= B; i++) {
    int a, b, c, d, e;
    a = i / 10000;
    b = (i - a * 10000) / 1000;
    c = (i - a * 10000 - b * 1000) / 100;
    d = (i - a * 10000 - b * 1000 - c * 100) / 10;
    e = i - a * 10000 - b * 1000 - c * 100 - d * 10;
    if (a == e && b == d)
      count++;
  }
  cout << count << endl;
}
