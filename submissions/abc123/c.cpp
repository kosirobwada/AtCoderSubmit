#include <bits/stdc++.h>
using namespace std;
using Graph = map<int, vector<int>>;
using ll = long long;
using P = pair<int, int>;
const int INF = 1e9;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = int(a); i < int(b); ++i)
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

int main() {
  ll N;
  cin >> N;
  vector<ll> a(5);
  rep(i, 0, 5) cin >> a[i];
  ll mi = 1e18;
  for (int i = 0; i < 5; i++) {
    chmin(mi, a[i]);
  }
  ll ans = 4 + (N + mi - 1) / mi;
  cout << ans << endl;
  return 0;
}
