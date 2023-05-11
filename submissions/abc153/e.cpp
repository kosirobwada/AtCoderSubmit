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
int dp[1010][10101];
int main() {
  int H, N;
  cin >> H >> N;
  vector<int> a(N), b(N);
  rep(i, 0, N) cin >> a[i] >> b[i];
  rep(i, 0, N + 1) rep(h, 0, H + 1) dp[i][h] = INF;
  dp[0][H] = 0;
  rep(i, 0, N) {
    for (int h = H; h >= 0; h--) {
      chmin(dp[i + 1][h], dp[i][h]);
      chmin(dp[i][max(0, h - a[i])], dp[i][h] + b[i]);
    }
  }
  cout << dp[N][0] << endl;
  return 0;
}
