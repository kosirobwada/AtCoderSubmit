#include <bits/stdc++.h>
using namespace std;

int main() {
  double n, t, a, ans = 1e13, place = 0;
  cin >> n >> t >> a;
  for (int i = 1; i <= n; i++) {
    double x;
    cin >> x;
    double l = t - x * 0.006;
    if (abs(l - a) < ans) {
      ans = abs(l - a);
      place = i;
    }
  }
  cout << (long long)place << endl;
  return 0;
}
