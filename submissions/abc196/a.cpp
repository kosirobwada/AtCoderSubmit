#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int t, ans = -201;
  for (int i = a; i <= b; i++) {
    for (int j = c; j <= d; j++) {
      t = i - j;
      ans = max(ans, t);
    }
  }
  cout << ans << endl;
}
