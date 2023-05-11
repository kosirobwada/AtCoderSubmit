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
// A, B ‚ÌÅ‘åŒö–ñ”‚ð•Ô‚·ŠÖ”
long long GCD(long long A, long long B) {
  if (B == 0)
    return A;
  else
    return GCD(B, A % B);
}
int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  rep(i, 0, N) cin >> a[i];
  int ans = a[0];
  rep(i, 0, N) ans = GCD(ans, a[i]);
  cout << ans << endl;
  return 0;
}
