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
  ll X, Y, A, B, C;
  cin >> X >> Y >> A >> B >> C;
  vector<ll> p(A), q(B), r(C);
  rep(i, 0, A) cin >> p[i];
  rep(i, 0, B) cin >> q[i];
  rep(i, 0, C) cin >> r[i];
  sort(all(p));
  sort(all(q));
  sort(all(r));
  reverse(all(p));
  reverse(all(q));
  reverse(all(r));
  vector<ll> ans;
  ll sum = 0;
  for (int i = 0; i < X; i++) {
    ans.pb(p[i]);
    sum += p[i];
  }
  for (int i = 0; i < Y; i++) {
    ans.pb(q[i]);
    sum += q[i];
  }
  sort(all(ans));
  int i = 0;
  for (auto v : ans) {
    if (v < r[i]) {
      sum -= v;
      sum += r[i];
      i++;
    }
  }
  cout << sum << endl;
  return 0;
}
