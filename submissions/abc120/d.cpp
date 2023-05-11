#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for (ll i = 0; i < n; i++)
#define F first
#define S second

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
int main() {
  ll N, M;
  cin >> N >> M;
  ll node1, node2;
  vector<pair<ll, ll>> A(M);
  for (ll i = 0; i < M; i++) {
    cin >> node1 >> node2;
    --node1;
    --node2;
    A[i].F = node1;
    A[i].S = node2;
  }
  vector<ll> ans(M);
  ans[M - 1] = (N * (N - 1)) / 2;
  UnionFind uf(N);
  for (ll i = M - 1; i >= 1; --i) {
    node1 = A[i].F;
    node2 = A[i].S;
    if (uf.issame(node1, node2)) {
      ans[i - 1] = ans[i];
    } else {
      ans[i - 1] = ans[i] - (uf.size(node1) * uf.size(node2));
      uf.merge(node1, node2);
    }
  }
  REP(i, M) { cout << ans[i] << endl; }
}
