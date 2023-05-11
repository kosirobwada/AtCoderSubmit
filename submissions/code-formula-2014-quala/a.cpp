// UnionFind

#define _GLIBCXX_DEBUG
#define ll long long
#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

void print(auto a) { cout << a; }

void prints(auto a) { cout << a << " "; }

void prints() { cout << " "; }

void printl(auto a) { cout << a << endl; }

void printl() { cout << endl; }

void fix(int n) { cout << fixed << setprecision(n); }

int siz(string s) { return (int)s.size(); }

struct UnionFind {
  vector<int> par, rank, siz;

  UnionFind(int n) : par(n, -1), rank(n, 0), siz(n, 1) {}

  int root(int x) {
    if (par[x] == -1)
      return x;
    else
      return par[x] = root(par[x]);
  }

  bool issame(int x, int y) { return root(x) == root(y); }

  bool unite(int x, int y) {
    int rx = root(x), ry = root(y);
    if (rx == ry)
      return false;
    if (rank[rx] < rank[ry])
      swap(rx, ry);
    par[ry] = rx;
    if (rank[rx] == rank[ry])
      rank[rx]++;
    siz[rx] += siz[ry];
    return true;
  }

  int size(int x) { return siz[root(x)]; }
};

int main() {
  ll A;
  cin >> A;

  for (ll i = 1; i <= 1000; i++) {
    if (A == i * i * i) {
      printl("YES");
      return 0;
    }
  }
  printl("NO");
  return 0;
}
