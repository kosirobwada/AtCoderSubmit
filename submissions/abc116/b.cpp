#include <bits/stdc++.h>
using namespace std;

int an(int n) {
  if (n % 2 == 0)
    n = n / 2;
  else
    n = 3 * n + 1;
  return n;
}

int main() {
  int s, m = 0;
  cin >> s;
  vector<int> a(1000000);
  a.at(1) = s;
  for (int i = 2; i < 1000000; i++) {
    a.at(i) = an(a.at(i - 1));
    for (int j = 1; j < i; j++) {
      if (a.at(i) == a.at(j)) {
        m = i;
        break;
      }
    }
    if (m == i)
      break;
  }
  cout << m << endl;
}
