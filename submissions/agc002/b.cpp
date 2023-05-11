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
  int N, M;
  cin >> N >> M;
  vector<int> num(N, 1);
  vector<bool> flag(N, false);
  flag[0] = true;
  for (int i = 0; i < M; i++) {
    int x, y;
    cin >> x >> y;
    x--;
    y--;
    num[x]--;
    num[y]++;
    if (flag[x] == true) {
      flag[y] = true;
      if (num[x] == 0)
        flag[x] = false;
    }
  }
  int ans = 0;
  rep(i, 0, N) if (flag[i]) ans++;
  cout << ans << endl;
  return 0;
}
