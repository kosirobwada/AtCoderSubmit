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
  int R, S, P;
  cin >> R >> S >> P;
  string t;
  cin >> t;
  int ans = 0;
  for (int i = 0; i < N; i++) {
    if (t[i] == 'p') {
      if (i < K)
        ans += S;
      if (i >= K) {
        if (t[i - K] != 'p')
          ans += S;
        else
          t[i] = 'o';
      }
    }
    if (t[i] == 's') {
      if (i < K)
        ans += R;
      if (i >= K) {
        if (t[i - K] != 's')
          ans += R;
        else
          t[i] = 'o';
      }
    }
    if (t[i] == 'r') {
      if (i < K)
        ans += P;
      if (i >= K) {
        if (t[i - K] != 'r')
          ans += P;
        else
          t[i] = 'o';
      }
    }
  }
  cout << ans << endl;
  return 0;
}
