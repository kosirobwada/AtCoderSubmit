#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

using ll = long long;

const int INF = 1001001001;
const ll INF_LL = 1001001001001001001LL;

int main(void) {
  int n;
  cin >> n;
  vector<int> x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];

  long double ans = -1.0;

  rep(i, n) {
    for (int j = i + 1; j < n; j++) {
      long double l =
          (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
      l = sqrt(l);
      ans = max(ans, l);
    }
  }

  cout << setprecision(12) << ans << endl;

  return 0;
}
