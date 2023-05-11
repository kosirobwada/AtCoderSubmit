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

int main() {
  int N, M;
  cin >> N >> M;
  vector<ll> a(N), b(N);
  REP(i, N) cin >> a[i];
  REP(i, N) cin >> b[i];
  UnionFind uf(N);
  REP(i, M) {
    int x, y;
    cin >> x >> y;
    --x;
    --y;
    uf.merge(x, y);
  }
  vector<ll> sa(N, 0), sb(N, 0);
  REP(i, N) {
    int r = uf.root(i);
    sa[r] += a[i];
    sb[r] += b[i];
  }
  bool res = true;
  REP(i, N) {
    int r = uf.root(i);
    if (sa[r] != sb[r])
      res = false;
  }
  if (res)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
