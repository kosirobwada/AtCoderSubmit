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
ll cnt[10][10];
int main() {
  int N;
  cin >> N;
  rep(i, 1, N + 1) {
    int x = i % 10;
    int top = -1;
    int y = i;
    while (0 < y) {
      top = y % 10;
      y /= 10;
    }
    cnt[top][x]++;
  }
  ll ans = 0;
  rep(i, 0, 10) rep(j, 0, 10) ans += cnt[i][j] * cnt[j][i];
  cout << ans << endl;
  return 0;
}
