#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int INF = 1e9;
const ll LINF = 1e18;
const ld pi = 3.141592653589793238;
int main() {
  int a, b, n, ans = 0;
  cin >> a >> b >> n;
  for (int i = 1; i > 0; i++) {
    ans = a * i;
    if (ans >= n && ans % b == 0) {
      cout << ans << endl;
      return 0;
    }
  }
  return 0;
}
