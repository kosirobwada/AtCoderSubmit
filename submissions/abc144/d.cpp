#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
#define all(x) (x).begin(), (x).end()
// #pragma GCC optimize ("-O3")
using namespace std;
void _main();
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  _main();
}
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;
template <class T> bool chmax(T &a, const T &b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T> bool chmin(T &a, const T &b) {
  if (b < a) {
    a = b;
    return 1;
  }
  return 0;
}
//---------------------------------------------------------------------------------------------------
const double EPS = 1e-8, INF = 1e12, PI = 2 * acos(0.0);
double A, B, X;
//---------------------------------------------------------------------------------------------------
void _main() {
  cin >> A >> B >> X;

  double half = A * A * B / 2;
  double ans;

  if (X < half)
    ans = atan(A * B * B / (2.0 * X));
  else
    ans = atan((2.0 * B - 2.0 * X / (A * A)) / A);

  ans = ans / PI * 180;

  printf("%.10f\n", ans);
}
