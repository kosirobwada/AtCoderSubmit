#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
typedef long long ll;

signed main() {
  ll n, m;
  cin >> n >> m;
  vector<vector<ll>> v(n + 1);
  while (m--) {
    ll a, b;
    cin >> a >> b;
    v[a].push_back(b);
  }
  dsu d(n + 1);
  vector<ll> res = {0}; // 頂点 N まで消した時の答えは必ず 0
  ll ans = 0;           // 今の連結成分の数
  for (ll i = n; i >= 2; i--) {
    ans++; // 頂点 i を追加
    for (auto j : v[i]) {
      if (!d.same(i, j)) {
        d.merge(i, j);
        ans--; // 非連結の頂点同士を繋げたとき、連結成分の数は 1 減る
      }
    }
    res.push_back(ans);
  }
  reverse(res.begin(), res.end());
  for (auto x : res)
    cout << x << endl;
  return 0;
}
