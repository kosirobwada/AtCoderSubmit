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
// ‘f”‚ð”»’è‚·‚éŠÖ”
bool isPrime(long long N) {
  if (N < 2)
    return false;
  for (long long i = 2; i * i <= N; ++i) {
    if (N % i == 0)
      return false;
  }
  return true;
}
int main() {
  ll N = 1e5 + 100;
  vector<ll> p(N, 0);
  for (ll i = 2; i < N; i++) {
    p[i] = p[i - 1];
    if (isPrime(i) && isPrime((i + 1) / 2))
      p[i]++;
  }
  ll Q;
  cin >> Q;
  for (int i = 0; i < Q; i++) {
    int l, r;
    cin >> l >> r;
    cout << p[r] - p[l - 1] << endl;
  }
  return 0;
}
