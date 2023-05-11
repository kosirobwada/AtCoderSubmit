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
ll mod = 1e9 + 7;
ll po(ll x) {
  ll y = 1;
  for (int i = 1; i <= x; i++) {
    y = (y * i) % mod;
  }
  return y;
}
int main() {
  int N, M;
  cin >> N >> M;
  if (abs(N - M) > 1)
    cout << 0 << endl;
  else if (abs(N - M) == 0) {
    cout << (2 * po(N) * po(M)) % mod << endl;
  } else {
    cout << (po(N) * po(M)) % mod << endl;
  }
  return 0;
}
