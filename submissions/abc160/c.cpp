#include <bits/stdc++.h>
using namespace std;

int main() {
  long long k, n;
  cin >> k >> n;
  vector<long long> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  int max = 0;
  for (int i = 0; i < n; i++) {
    int tmp = 0;
    if (i != n - 1) {
      tmp = a.at(i + 1) - a.at(i);
    } else
      tmp = k - a.at(i) + a.at(0);
    if (tmp > max)
      max = tmp;
  }
  cout << k - max << endl;
}
