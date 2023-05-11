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
  vector<int> a(N + 2, 0);
  rep(i, 1, N + 1) cin >> a[i];
  ll sum = 0;
  for (int i = 1; i <= N + 1; i++) {
    sum += abs(a[i] - a[i - 1]);
  }
  for (int i = 1; i <= N; i++) {
    ll x = abs(a[i] - a[i - 1]) + abs(a[i + 1] - a[i]);
    ll y = abs(a[i + 1] - a[i - 1]);
    cout << sum - abs(y - x) << endl;
  }
  return 0;
}
