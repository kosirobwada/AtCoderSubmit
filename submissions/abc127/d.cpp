#include <bits/stdc++.h>
using namespace std;
using Graph = map<int, vector<int>>;
using ll = long long;
using P = pair<ll, ll>;
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
  int N, M;
  cin >> N >> M;
  vector<P> v;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    v.pb({a, 1});
  }
  for (int i = 0; i < M; i++) {
    int b, c;
    cin >> b >> c;
    v.pb({c, b});
  }
  sort(all(v), greater<P>());
  ll num = 0;
  ll res = 0;
  for (auto p : v) {
    if (num + p.second <= N) {
      res += p.first * p.second;
      num += p.second;
    } else {
      res += p.first * (N - num);
      num = N;
      break;
    }
  }
  cout << res << endl;
  return 0;
}
