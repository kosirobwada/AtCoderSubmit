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
  vector<int> a(N);
  vector<int> b(N, 0);
  rep(i, 0, N) cin >> a[i];
  int ans = 0;
  for (int i = N - 1; i >= 0; i--) {
    int x = 0;
    for (int j = i; j < N; j += (i + 1))
      x += b[j];
    if (x % 2 != a[i])
      b[i] = 1, ans++;
  }
  if (ans == 0)
    cout << 0 << endl;
  else {
    cout << ans << endl;
    for (int i = 0; i < N; i++) {
      if (b[i] == 1) {
        cout << i + 1 << ' ';
        ans--;
      }
    }
    cout << endl;
  }
  return 0;
}
