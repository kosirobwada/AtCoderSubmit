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
  int sx, sy, gx, gy;
  cin >> sx >> sy >> gx >> gy;
  string ans = "";
  int x = gx - sx;
  int y = gy - sy;
  rep(i, 0, x) ans += "R";
  rep(i, 0, y) ans += "U";
  rep(i, 0, x) ans += "L";
  rep(i, 0, y) ans += "D";
  ans += "D";
  rep(i, 0, x + 1) ans += "R";
  rep(i, 0, y + 1) ans += "U";
  ans += "L";
  ans += "U";
  rep(i, 0, x + 1) ans += "L";
  rep(i, 0, y + 1) ans += "D";
  ans += "R";
  cout << ans << endl;
  return 0;
}
