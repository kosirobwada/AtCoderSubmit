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
  ll A, B, P, Q, N;
  cin >> N >> Q;
  UnionFind uf(N);

  REP(i, Q) {
    cin >> P >> A >> B;
    if (P == 0) {
      uf.merge(A, B);
    } else {
      if (uf.issame(A, B))
        cout << "Yes" << endl;
      else
        cout << "No" << endl;
    }
  }
}
