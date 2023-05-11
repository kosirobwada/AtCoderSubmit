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
  int N;
  cin >> N;
  N--;
  vector<int> C(N), S(N), F(N);
  rep(i, 0, N) cin >> C[i] >> S[i] >> F[i];
  for (int i = 0; i < N; i++) {
    int ans = 0;
    for (int j = i; j < N; j++) {
      ans = max(ans, S[j]);
      int d = ans - S[j];
      if (d % F[j])
        d = F[j] - (d % F[j]);
      else
        d = 0;
      ans += d + C[j];
    }
    cout << ans << endl;
  }
  cout << 0 << endl;
  return 0;
}
