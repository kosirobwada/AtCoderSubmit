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
  vector<ll> res = {0}; // ���_ N �܂ŏ��������̓����͕K�� 0
  ll ans = 0;           // ���̘A�������̐�
  for (ll i = n; i >= 2; i--) {
    ans++; // ���_ i ��ǉ�
    for (auto j : v[i]) {
      if (!d.same(i, j)) {
        d.merge(i, j);
        ans--; // ��A���̒��_���m���q�����Ƃ��A�A�������̐��� 1 ����
      }
    }
    res.push_back(ans);
  }
  reverse(res.begin(), res.end());
  for (auto x : res)
    cout << x << endl;
  return 0;
}
