#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for (ll i = 0; i < n; ++i)
#define REP2(i, a, b) for (ll i = a; i < b; i++)

int main() {
  ll n;
  cin >> n;
  long double ans = 0.0;
  for (int i = n; i > 0; i--)
    ans += 1.0 * n / i;
  cout << fixed << setprecision(15) << ans << endl;
  return 0;
}
