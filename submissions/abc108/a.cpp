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
  int N, K;
  cin >> N >> K;
  ll ans = 0;
  int cnt = 0;
  for (int i = 1; i <= N; i++) {
    if (i % K == 0)
      cnt++;
  }
  ans += 1LL * cnt * cnt * cnt;
  if (K % 2 == 0) {
    int c = 0;
    rep(i, 1, N + 1) if (i % K == K / 2) c++;
    ans += 1LL * c * c * c;
  }
  cout << ans << endl;
  return 0;
}
