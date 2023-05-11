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
ll modPow(ll a, ll n) {
  if (n == 0)
    return 1;
  if (n == 1)
    return a;
  if (n % 2 == 1)
    return (a * modPow(a, n - 1));
  ll t = modPow(a, n / 2);
  return (t * t);
}

int main() {
  ll N;
  cin >> N;
  if (N % 2 == 1) {
    cout << 0 << endl;
    return 0;
  }
  ll ans = N / 10;
  N /= 10;
  ll p = 5;
  while (p <= N) {
    ans += N / p;
    p *= 5;
  }
  cout << ans << endl;
  return 0;
}
