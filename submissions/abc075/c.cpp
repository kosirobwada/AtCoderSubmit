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
  UnionFind uf(N);
  vector<pair<ll, ll>> vec(M);
  ll a, b;
  REP(i, M) {
    cin >> a >> b;
    --a;
    --b;
    vec[i].F = a;
    vec[i].S = b;
  }
  ll res = 0;
  REP(i, M) {
    uf.init(N);
    REP(j, M) {
      if (i == j)
        continue;
      uf.merge(vec[j].F, vec[j].S);
    }
    if (uf.size(0) < N)
      res++;
  }
  cout << res << endl;
}
