#include <bits/stdc++.h>
// #include <atcoder/modint>
// using namespace atcoder;using mint = modint1000000007;
// using namespace atcoder;using mint = modint998244353;
// using namespace atcoder;using mint = modint;
using namespace std;
using ll = long long;
using C = complex<double>;
#define rep(i, f, n) for (ll i = (f); (i) < (n); i++)
#define lp(n) for (ll iii = 0; (iii) < (n); iii++)
#define repc(i, f, n) for (char i = (f); (i) <= (n); i++)
#define fi first
#define se second
// #define PI 3.14159265358979323846264338327950L
#define debug(x) cout << #x << " :: " << x << "\n";
#define debug2(x, y)                                                           \
  cout << #x << " :: " << x << "\t" << #y << " :: " << y << "\n";
#define debug3(x, y, z)                                                        \
  cout << #x << " :: " << x << "\t" << #y << " :: " << y << "\t" << #z         \
       << " :: " << z << "\n";
#define PL pair<ll, ll>
#define dvec vector<vector<ll>>
#define OUT(x)                                                                 \
  std::cout << x << endl;                                                      \
  return 0;
#define ALL(x) (x).begin(), (x).end()
#define UNIQUE(x) (x).erase(unique(ALL(x)), (x).end()) // x must be sorted
// printf("%.10f\n")
// cout << fixed << setprecision(10);
template <class T> inline bool chmax(T &a, T b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}
template <class T> inline bool chmaxe(T &a, T b) {
  if (a <= b) {
    a = b;
    return true;
  }
  return false;
}
template <class T> inline bool chmin(T &a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}
// const ll MOD = 1000000007;
// const ll MOD = 998244353;
const ll INF = 1e+18;
const double EPS = 1e-10;
// const double PI = acos(-1.0);

int main() {
  ll N;
  cin >> N;
  vector<ll> A(N + 1);
  rep(i, 0, N + 1) cin >> A[i];
  vector<ll> B(N);
  rep(i, 0, N) cin >> B[i];

  ll ans = 0;
  for (ll i = N - 1; i >= 0; i -= 1) {
    ans += min(A[i + 1], B[i]);
    B[i] = max(0LL, B[i] - A[i + 1]);
    ans += min(A[i], B[i]);
    A[i] = max(0LL, A[i] - B[i]);
  }

  cout << ans << endl;
}
