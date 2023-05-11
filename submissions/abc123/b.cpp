#include <bits/stdc++.h>
using namespace std;

int main() {
  int m = 10, t = 0;
  vector<int> a(5);
  for (int i = 0; i < 5; i++) {
    cin >> a.at(i);
    if (a.at(i) % 10 != 0) {
      m = min(m, a.at(i) % 10);
    }
    a.at(i) = (a.at(i) + 9) / 10;
    t += a.at(i) * 10;
  }
  cout << t - 10 + m;
}
