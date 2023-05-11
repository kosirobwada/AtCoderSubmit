#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
ll MOD = 1000000007;

const double PI = 3.14159265358979323846;

#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

// a^p
// 2^3 = 2 * 2^2
// 2^2 = 2 * (2^1)
// 2^1 = 2
ll modpow(ll a, ll p, ll mod) {
  if (p == 0)
    return 1;

  if (p % 2 == 0) {
    ll half = modpow(a, p / 2, mod) % mod;
    return half * half % mod;
  } else {
    return a * modpow(a, p - 1, mod) % mod;
  }
}

// a/b
// https://qiita.com/drken/items/3b4fdf0a78e7a138cd9a
ll moddiv(ll a, ll b, ll mod) { return a * modpow(b, mod - 2, mod); }

// nCa を求める
ll modCombination(ll n, ll a, ll mod) {
  if (n < 0 || n < a)
    return 0;
  if (n - a < a) {
    return modCombination(n, n - a, mod);
  }

  ll denominator = 1; // 分母
  ll numerator = 1;   // 分子

  for (ll i = 0; i < a; i++) {
    denominator *= a - i;
    numerator *= n - i;
    denominator %= mod;
    numerator %= mod;
  }

  return numerator * modpow(denominator, mod - 2, mod) % mod;
}

class UnionFind {
private:
  vector<ll> parents;

public:
  UnionFind(ll n) : parents(n, -1) {}

  bool issame(ll x, ll y) { return root(x) == root(y); }

  bool merge(ll x, ll y) {
    if (issame(x, y))
      return false;

    ll rx = root(x);
    ll ry = root(y);
    if (parents[rx] > parents[ry])
      swap(rx, ry);
    // サイズ情報を更新
    parents[rx] += parents[ry];
    // yの親を更新
    parents[ry] = rx;

    return true;
  }

  ll size(ll x) { return -parents[root(x)]; }

  ll root(ll x) {
    if (parents[x] < 0)
      return x;
    // 根の親の値に木の(-)サイズの情報を入れる
    return parents[x] = root(parents[x]);
  }
};

// cf. https://qiita.com/drken/items/a14e9af0ca2d857dad23
vector<ll> enum_divisors(ll n) {
  vector<ll> res;
  // sqrt(n)まで試し割り
  for (ll i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      res.push_back(i);
      // 重複しないならばiの相方であるn/iも約数
      // e.g. n=25のときのi=5は重複
      if (n / i != i)
        res.push_back(n / i);
    }
  }

  sort(res.begin(), res.end());
  return res;
}

// cf. https://qiita.com/drken/items/a14e9af0ca2d857dad23
map<ll, ll> prime_factors(ll n) {
  map<ll, ll> res;
  // sqrt(n)まで試し割り
  for (ll a = 2; a * a <= n; a++) {
    if (n % a != 0)
      continue;

    // nで割れる限り割る
    while (n % a == 0) {
      res[a]++;
      n /= a;
    }
  }
  if (n != 1)
    res[n]++;

  return res;
}

ll gcd(ll a, ll b) {
  if (b == 0)
    return a;
  else
    return gcd(b, a % b);
}

// cf. https://qiita.com/drken/items/56a6b68edef8fc605821
class AccumSum2D {
private:
  vector<vector<ll>> sum;
  ll H;
  ll W;

public:
  AccumSum2D(vector<vector<ll>> &A) {
    H = (ll)A.size();
    W = (ll)A[0].size();
    sum.resize(H + 1, vector<ll>(W + 1));

    for (ll i = 0; i < H; i++) {
      for (ll j = 0; j < W; j++) {
        sum[i + 1][j + 1] = sum[i][j + 1] + sum[i + 1][j] - sum[i][j] + A[i][j];
      }
    }
  }

  // クエリ [x1, x2) × [y1, y2) の長方形区域の和
  ll Sum(ll x1, ll x2, ll y1, ll y2) {
    return sum[x2][y2] - sum[x1][y2] - sum[x2][y1] + sum[x1][y1];
  }
};

// cf. https://tsutaj.hatenablog.com/entry/2017/03/30/224339
template <class S, S (*op)(S, S), S (*e)()> class LazySegmentTree {
private:
  ll n;
  vector<S> node;
  vector<S> lazy;

public:
  LazySegmentTree(const vector<S> &A) {
    ll size = (ll)A.size();
    n = 1;
    while (n < size) {
      n *= 2;
    }
    node.resize(2 * n - 1);
    lazy.resize(2 * n - 1);

    for (ll i = 0; i < size; i++) {
      node[i + n - 1] = A[i];
    }

    for (ll i = n - 2; i >= 0; i--) {
      node[i] = op(node[2 * i + 1], node[2 * i + 2]);
    }
  }

  // [a,b)
  S query(ll a, ll b) { return query(a, b, 0, 0, n); }

  // [a,b)
  void update(ll a, ll b, S x) { update(a, b, x, 0, 0, n); }

private:
  void eval(ll k, ll l, ll r) {
    if (lazy[k] != e()) {
      if (r - l > 1) {
        lazy[2 * k + 1] = op(lazy[2 * k + 1], lazy[k]);
        lazy[2 * k + 2] = op(lazy[2 * k + 2], lazy[k]);
      }

      node[k] = op(node[k], lazy[k]);
      lazy[k] = e();
    }
  }

  S query(ll a, ll b, ll k, ll l, ll r) {
    eval(k, l, r);
    if (b <= l || r <= a)
      return e();
    if (a <= l && r <= b)
      return node[k];

    ll m1 = query(a, b, 2 * k + 1, l, (l + r) / 2);
    ll m2 = query(a, b, 2 * k + 2, (l + r) / 2, r);
    return op(m1, m2);
  }

  void update(ll a, ll b, S x, ll k, ll l, ll r) {
    eval(k, l, r);
    if (b <= l || r <= a)
      return;
    if (a <= l && r <= b) {
      lazy[k] = op(lazy[k], x);
      eval(k, l, r);
      return;
    }

    update(a, b, x, 2 * k + 1, l, (l + r) / 2);
    update(a, b, x, 2 * k + 2, (l + r) / 2, r);

    node[k] = op(node[2 * k + 1], node[2 * k + 2]);
  }
};

// p/q
struct fraction {
  ll p, q;
  fraction(ll _p = 0, ll _q = 1) : p(_p), q(_q) {
    if (q == 0) {
      p = 1;
      return;
    }

    ll g = gcd(p, q);
    p /= g;
    q /= g;
  }

  bool operator<(const fraction &other) const {
    return p * other.q < q * other.p;
  }

  bool operator<=(const fraction &other) const {
    return p * other.q <= q * other.p;
  }

  bool operator==(const fraction &other) const {
    return p == other.p && q == other.q;
  }
};

// 多次元 vector 生成
template <class T> vector<T> make_vec(size_t a) { return vector<T>(a); }
template <class T, class... Ts> auto make_vec(size_t a, Ts... ts) {
  return vector<decltype(make_vec<T>(ts...))>(a, make_vec<T>(ts...));
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);

  ll N, K;
  cin >> N >> K;
  ll complementary = 0;
  for (ll r = 1; r <= N; r++) {
    ll min_v = max(1LL, r - (K - 1));
    ll max_v = min(N, r + (K - 1));
    for (ll g = min_v; g <= max_v; g++) {
      for (ll b = min_v; b <= max_v; b++) {
        if (abs(r - g) >= K)
          continue;
        if (abs(g - b) >= K)
          continue;
        if (abs(b - r) >= K)
          continue;
        complementary++;
      }
    }
  }

  cout << N * N * N - complementary << endl;

  return 0;
}
