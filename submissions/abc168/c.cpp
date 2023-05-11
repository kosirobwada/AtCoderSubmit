#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define REP(i, n) for (ll i = 0; i < n; ++i)
#define REP2(i, a, b) for (ll i = a; i < b; ++i)

const ld pi = 3.141592653589793238;

int main() {
  ll a, b, h, m;
  cin >> a >> b >> h >> m;
  ld h_theta = h * 30 + 30.0 * m / 60;
  ld m_theta = 360.0 * m / 60;
  ld theta = abs(h_theta - m_theta);
  theta = min(theta, 360 - theta);
  ld ans = sqrt(a * a + b * b - 2.0 * a * b * cos(pi * theta / 180));
  cout << fixed << setprecision(15) << ans << endl;
  return 0;
}
