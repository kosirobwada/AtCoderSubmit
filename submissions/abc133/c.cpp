#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
#define rep2(i, N) for (int i = 1; i <= N; i++)
#define rep3(i, N) for (int i = N - 1; i >= 0; i--)
#define rep4(i, N) for (int i = N; i > 0; i--)
#define all(x) x.begin(), x.end()
typedef long long ll;
using P = pair<int, int>;
int main() {
  ll l, r;
  cin >> l >> r;
  r = min(r, l + 4038);
  int ans = 2018;
  for (ll i = l; i <= r; i++) {
    for (ll j = i + 1; j <= r; j++) {
      int x = i * j % 2019;
      ans = min(ans, x);
    }
  }
  cout << ans << endl;
  return 0;
}
