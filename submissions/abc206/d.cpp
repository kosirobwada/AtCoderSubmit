#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for (ll i = 0; i < n; i++)

class UnionFind {
public:
  vector<ll> par;
  vector<ll> siz;

  UnionFind(ll sz_) : par(sz_), siz(sz_, 1) {
    for (ll i = 0; i < sz_; ++i)
      par[i] = i;
  }
  void init(ll sz_) {
    par.resize(sz_);
    siz.assign(sz_, 1);
    for (ll i = 0; i < sz_; ++i)
      par[i] = i;
  }
  ll root(ll x) {
    while (par[x] != x) {
      x = par[x] = par[par[x]];
    }
    return x;
  }
  bool merge(ll x, ll y) {
    x = root(x);
    y = root(y);
    if (x == y)
      return false;
    if (siz[x] < siz[y])
      swap(x, y);
    siz[x] += siz[y];
    par[y] = x;
    return true;
  }
  bool issame(ll x, ll y) { return root(x) == root(y); }
  ll size(ll x) { return siz[root(x)]; }
};
const int MAX = 210000;
int main() {
  ll N;
  cin >> N;
  vector<int> A(N);
  REP(i, N) cin >> A[i];
  UnionFind uf(MAX);
  int i = 0, j = N - 1;
  while (i < j) {
    uf.merge(A[i], A[j]);
    i++;
    j--;
  }
  ll ans = 0;
  for (int v = 0; v < MAX; v++) {
    if (uf.root(v) == v) {
      ans += uf.size(v) - 1;
    }
  }
  cout << ans << endl;
}
