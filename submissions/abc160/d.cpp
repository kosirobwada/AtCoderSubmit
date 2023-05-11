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
  int N, X, Y;
  cin >> N >> X >> Y;

  vector<int> ans(N + 100, 0);
  for (int i = 1; i < N; i++) {
    for (int j = i + 1; j <= N; j++) {
      int c = j - i;
      chmin(c, abs(j - Y) + 1 + abs(X - i));
      ans[c]++;
    }
  }
  for (int i = 1; i < N; i++) {
    cout << ans[i] << endl;
  }
  return 0;
}
