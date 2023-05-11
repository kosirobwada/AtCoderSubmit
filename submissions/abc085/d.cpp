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
  int N, H;
  cin >> N >> H;
  vector<int> a(N), b(N);
  rep(i, 0, N) cin >> a[i] >> b[i];
  sort(all(a));
  sort(all(b));
  reverse(all(b));
  int ma = a[N - 1];
  int ans = 0;
  vector<int> v;
  for (auto x : b) {
    if (x >= ma)
      v.pb(x);
  }
  for (auto x : v) {
    ans++;
    H -= x;
    if (H <= 0) {
      cout << ans << endl;
      return 0;
    }
  }
  ans += (H + ma - 1) / ma;
  cout << ans << endl;
  return 0;
}
